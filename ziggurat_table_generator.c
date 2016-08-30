/* Ziggurat table generator
 * This source code is used for generating table integer k, table real w and
 * table function f of Ziggurat method. This generator will generate both
 * table for normal distribution and exponential distribution.
 *
 * The table is based on the original implementation:
 *
 * MARSAGLIA, George; TSANG, Wai Wan.
 * The Ziggurat Method for Generating Random Variables.
 * Journal of Statistical Software, [S.l.], v. 5, Issue 8, p. 1 - 7, oct. 2000.
 * ISSN 1548-7660.
 * Available at: <https://www.jstatsoft.org/index.php/jss/article/view/v005i08>
 * Date accessed: 29 aug. 2016. doi:http://dx.doi.org/10.18637/jss.v005.i08.
 *
 * Compile:
 * gcc ziggurat_table_generator.c -o ztg -lm
 *
 * Run:
 * ./ztg > ziggurat_table.h
 *
 * Copyright (c) 2016, Bayu Aldi Yansyah. All rights reserved.
 * Use of this source code is governed by a BSD-style license
 * that can be found in the LICENSE file.
 */

/* Start of the original implementation */
#include <math.h>
static unsigned long jz, jsr=123456789;

#define SHR3 (jz=jsr, jsr^=(jsr<<13), jsr^=(jsr>>17), jsr^=(jsr<<5),jz+jsr)
#define UNI (.5 + (signed) SHR3*.2328306e-9)
#define IUNI SHR3

static long hz;
static unsigned long iz, kn[128], ke[256];
static float wn[128],fn[128], we[256],fe[256];

#define RNOR (hz=SHR3, iz=hz&127, (fabs(hz)<kn[iz])? hz*wn[iz] : nfix())
#define REXP (jz=SHR3, iz=jz&255, (jz <ke[iz])? jz*we[iz] : efix())

/* nfix() generates variates from the residue when rejection in RNOR occurs. */
float nfix(void)
{
    const float r = 3.442620f;     /* The start of the right tail */
    static float x, y;

    for(;;) {
        x=hz*wn[iz];      /* iz==0, handles the base strip */
        if(iz==0) {
            do{ x=-log(UNI)*0.2904764; y=-log(UNI);}	/* .2904764 is 1/r */
            while(y+y<x*x);
            return (hz>0)? r+x : -r-x;
        }
                         /* iz>0, handle the wedges of other strips */
        if( fn[iz]+UNI*(fn[iz-1]-fn[iz]) < exp(-.5*x*x) ) return x;
        /* initiate, try to exit for(;;) for loop*/
        hz=SHR3;
        iz=hz&127;
        if(fabs(hz)<kn[iz]) return (hz*wn[iz]);
    }
}

/* efix() generates variates from the residue when rejection in REXP occurs. */
float efix(void)
{
    float x;
    for(;;) {
        if(iz==0) return (7.69711-log(UNI));          /* iz==0 */
        x=jz*we[iz]; if( fe[iz]+UNI*(fe[iz-1]-fe[iz]) < exp(-x) ) return (x);
        /* initiate, try to exit for(;;) loop */
        jz=SHR3;
        iz=(jz&255);
        if(jz<ke[iz]) return (jz*we[iz]);
    }
}

/*--------This procedure sets the seed and creates the tables------*/
void zigset(unsigned long jsrseed)
{
    const double m1 = 2147483648.0, m2 = 4294967296.;
    double dn=3.442619855899,tn=dn,vn=9.91256303526217e-3, q;
    double de=7.697117470131487, te=de, ve=3.949659822581572e-3;
    int i;
    jsr^=jsrseed;

    /* Set up tables for RNOR */
    q=vn/exp(-.5*dn*dn);
    kn[0]=(dn/q)*m1;
    kn[1]=0;

    wn[0]=q/m1;
    wn[127]=dn/m1;

    fn[0]=1.;
    fn[127]=exp(-.5*dn*dn);

    for(i=126; i>=1; i--) {
        dn=sqrt(-2.*log(vn/dn+exp(-.5*dn*dn)));
        kn[i+1]=(dn/tn)*m1;
        tn=dn;
        fn[i]=exp(-.5*dn*dn);
        wn[i]=dn/m1;
    }

    /* Set up tables for REXP */
    q = ve/exp(-de);
    ke[0]=(de/q)*m2;
    ke[1]=0;

    we[0]=q/m2;
    we[255]=de/m2;

    fe[0]=1.;
    fe[255]=exp(-de);

   for(i=254; i>=1; i--) {
       de=-log(ve/de+exp(-de));
       ke[i+1]= (de/te)*m2;
       te=de;
       fe[i]=exp(-de);
       we[i]=de/m2;
   }
}

/* End of original implementation */


/* Ziggurat table generator */
#include <stdio.h>
#include <time.h>

const int ZIGGURAT_TABLE_NOR_SIZE = 128;
const int ZIGGURAT_TABLE_EXP_SIZE = 256;

int main(int argc, char **argv)
{
    /* get current timestamp */
    time_t rawtime;
    struct tm * timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    /* populate table kn, wn, ke and we */
    zigset(1);
    printf("/* Generated by ziggurat_table_generator.c at %s",
        asctime(timeinfo));
    printf("%s\n", " * DO NOT EDIT THIS FILE!");
    printf("%s\n", " *");
    printf("%s\n",
            " * Copyright (c) 2016, Bayu Aldi Yansyah. All rights reserved.\n"
            " * Use of this source code is governed by a BSD-style license\n"
            " * that can be found in the LICENSE file.");
    printf("%s\n", " */\n");

    /* requried headers */
    printf("%s\n", "#include <stdint.h>");
    printf("%s\n", "");

    /* print constant */
    printf("#define ZIGGURAT_TABLE_NOR_SIZE %d\n", 128);
    printf("#define ZIGGURAT_TABLE_EXP_SIZE %d\n", 256);
    printf("%s\n", "");

    printf("%s\n", "/* Table integer k for normal distribution */");
    printf("%s\n", "uint32_t ziggurat_kn[ZIGGURAT_TABLE_NOR_SIZE] = {");
    for(int i = 0; i < ZIGGURAT_TABLE_NOR_SIZE; i++) {
        if(i == 0) printf("%s", "    ");
        printf("%ld", kn[i]);
        if(i != ZIGGURAT_TABLE_NOR_SIZE-1) printf("%s", ", ");
        if(i > 0 && i % 4 == 0) printf("%s", "\n    ");
    }
    printf("\n%s\n\n", "};");

    printf("%s\n", "/* Table real w for normal distribution */");
    printf("%s\n", "double ziggurat_wn[ZIGGURAT_TABLE_NOR_SIZE] = {");
    for(int i = 0; i < ZIGGURAT_TABLE_NOR_SIZE; i++) {
        if(i == 0) printf("%s", "    ");
        if(i > 0 && i % 4 == 0) printf("%s", "\n    ");
        printf("%E", wn[i]);
        if(i != ZIGGURAT_TABLE_NOR_SIZE-1) printf("%s", ", ");
    }
    printf("\n%s\n\n", "};");

    printf("%s\n", "/* Table function f for normal distribution */");
    printf("%s\n", "double ziggurat_fn[ZIGGURAT_TABLE_NOR_SIZE] = {");
    for(int i = 0; i < ZIGGURAT_TABLE_NOR_SIZE; i++) {
        if(i == 0) printf("%s", "    ");
        if(i > 0 && i % 4 == 0) printf("%s", "\n    ");
        printf("%E", fn[i]);
        if(i != ZIGGURAT_TABLE_NOR_SIZE-1) printf("%s", ", ");
    }
    printf("\n%s\n\n", "};");

    printf("%s\n", "/* Table integer k for exponential distribution */");
    printf("%s\n", "uint32_t ziggurat_ke[ZIGGURAT_TABLE_EXP_SIZE] = {");
    for(int i = 0; i < ZIGGURAT_TABLE_EXP_SIZE; i++) {
        if(i == 0) printf("%s", "    ");
        printf("%ld", ke[i]);
        if(i != ZIGGURAT_TABLE_EXP_SIZE-1) printf("%s", ", ");
        if(i > 0 && i % 4 == 0) printf("%s", "\n    ");
    }
    printf("\n%s\n\n", "};");

    printf("%s\n", "/* Table real w for exponential distribution */");
    printf("%s\n", "double ziggurat_we[ZIGGURAT_TABLE_EXP_SIZE] = {");
    for(int i = 0; i < ZIGGURAT_TABLE_EXP_SIZE; i++) {
        if(i == 0) printf("%s", "    ");
        if(i > 0 && i % 4 == 0) printf("%s", "\n    ");
        printf("%E", we[i]);
        if(i != ZIGGURAT_TABLE_EXP_SIZE-1) printf("%s", ", ");
    }
    printf("\n%s\n\n", "};");

    printf("%s\n", "/* Table function f for exponential distribution */");
    printf("%s\n", "double ziggurat_fe[ZIGGURAT_TABLE_EXP_SIZE] = {");
    for(int i = 0; i < ZIGGURAT_TABLE_EXP_SIZE; i++) {
        if(i == 0) printf("%s", "    ");
        if(i > 0 && i % 4 == 0) printf("%s", "\n    ");
        printf("%E", fe[i]);
        if(i != ZIGGURAT_TABLE_EXP_SIZE-1) printf("%s", ", ");
    }
    printf("\n%s\n\n", "};");

}
