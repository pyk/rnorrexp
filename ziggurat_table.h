/* Generated by ziggurat_table_generator.c at Tue Aug 30 07:09:51 2016
 * DO NOT EDIT THIS FILE!
 *
 * Copyright (c) 2016, Bayu Aldi Yansyah. All rights reserved.
 * Use of this source code is governed by a BSD-style license
 * that can be found in the LICENSE file.
 */

#include <stdint.h>

#define ZIGGURAT_TABLE_NOR_SIZE 128
#define ZIGGURAT_TABLE_EXP_SIZE 256

/* Table integer k for normal distribution */
uint32_t ziggurat_kn[ZIGGURAT_TABLE_NOR_SIZE] = {
    1991057938, 0, 1611602771, 1826899878, 1918584482, 
    1969227037, 2001281515, 2023368125, 2039498179, 
    2051788381, 2061460127, 2069267110, 2075699398, 
    2081089314, 2085670119, 2089610331, 2093034710, 
    2096037586, 2098691595, 2101053571, 2103168620, 
    2105072996, 2106796166, 2108362327, 2109791536, 
    2111100552, 2112303493, 2113412330, 2114437283, 
    2115387130, 2116269447, 2117090813, 2117856962, 
    2118572919, 2119243101, 2119871411, 2120461303, 
    2121015852, 2121537798, 2122029592, 2122493434, 
    2122931299, 2123344971, 2123736059, 2124106020, 
    2124456175, 2124787725, 2125101763, 2125399283, 
    2125681194, 2125948325, 2126201433, 2126441213, 
    2126668298, 2126883268, 2127086657, 2127278949, 
    2127460589, 2127631985, 2127793506, 2127945490, 
    2128088244, 2128222044, 2128347141, 2128463758, 
    2128572095, 2128672327, 2128764606, 2128849065, 
    2128925811, 2128994934, 2129056501, 2129110560, 
    2129157136, 2129196237, 2129227847, 2129251929, 
    2129268426, 2129277255, 2129278312, 2129271467, 
    2129256561, 2129233410, 2129201800, 2129161480, 
    2129112170, 2129053545, 2128985244, 2128906855, 
    2128817916, 2128717911, 2128606255, 2128482298, 
    2128345305, 2128194452, 2128028813, 2127847342, 
    2127648860, 2127432031, 2127195339, 2126937058, 
    2126655214, 2126347546, 2126011445, 2125643893, 
    2125241376, 2124799783, 2124314271, 2123779094, 
    2123187386, 2122530867, 2121799464, 2120980787, 
    2120059418, 2119015917, 2117825402, 2116455471, 
    2114863093, 2112989789, 2110753906, 2108037662, 
    2104664315, 2100355223, 2094642347, 2086670106, 
    2074676188, 2054300022, 2010539237
};

/* Table real w for normal distribution */
double ziggurat_wn[ZIGGURAT_TABLE_NOR_SIZE] = {
    1.729040E-09, 1.268093E-10, 1.689752E-10, 1.986269E-10, 
    2.223243E-10, 2.424494E-10, 2.601613E-10, 2.761199E-10, 
    2.907396E-10, 3.042997E-10, 3.169980E-10, 3.289802E-10, 
    3.403574E-10, 3.512160E-10, 3.616251E-10, 3.716406E-10, 
    3.813086E-10, 3.906676E-10, 3.997501E-10, 4.085840E-10, 
    4.171931E-10, 4.255982E-10, 4.338176E-10, 4.418672E-10, 
    4.497613E-10, 4.575126E-10, 4.651324E-10, 4.726310E-10, 
    4.800177E-10, 4.873010E-10, 4.944885E-10, 5.015873E-10, 
    5.086040E-10, 5.155446E-10, 5.224147E-10, 5.292193E-10, 
    5.359635E-10, 5.426517E-10, 5.492882E-10, 5.558770E-10, 
    5.624219E-10, 5.689265E-10, 5.753941E-10, 5.818282E-10, 
    5.882317E-10, 5.946077E-10, 6.009590E-10, 6.072884E-10, 
    6.135985E-10, 6.198920E-10, 6.261713E-10, 6.324390E-10, 
    6.386974E-10, 6.449488E-10, 6.511956E-10, 6.574400E-10, 
    6.636843E-10, 6.699307E-10, 6.761814E-10, 6.824387E-10, 
    6.887046E-10, 6.949815E-10, 7.012715E-10, 7.075768E-10, 
    7.138997E-10, 7.202424E-10, 7.266073E-10, 7.329966E-10, 
    7.394128E-10, 7.458583E-10, 7.523355E-10, 7.588470E-10, 
    7.653954E-10, 7.719835E-10, 7.786140E-10, 7.852897E-10, 
    7.920138E-10, 7.987892E-10, 8.056192E-10, 8.125073E-10, 
    8.194569E-10, 8.264717E-10, 8.335556E-10, 8.407127E-10, 
    8.479473E-10, 8.552640E-10, 8.626675E-10, 8.701632E-10, 
    8.777562E-10, 8.854524E-10, 8.932582E-10, 9.011800E-10, 
    9.092250E-10, 9.174008E-10, 9.257158E-10, 9.341788E-10, 
    9.427997E-10, 9.515889E-10, 9.605579E-10, 9.697193E-10, 
    9.790869E-10, 9.886760E-10, 9.985036E-10, 1.008588E-09, 
    1.018951E-09, 1.029615E-09, 1.040607E-09, 1.051957E-09, 
    1.063698E-09, 1.075870E-09, 1.088518E-09, 1.101695E-09, 
    1.115461E-09, 1.129890E-09, 1.145070E-09, 1.161105E-09, 
    1.178128E-09, 1.196300E-09, 1.215829E-09, 1.236986E-09, 
    1.260132E-09, 1.285770E-09, 1.314620E-09, 1.347784E-09, 
    1.387064E-09, 1.435740E-09, 1.500866E-09, 1.603095E-09
};

/* Table function f for normal distribution */
double ziggurat_fn[ZIGGURAT_TABLE_NOR_SIZE] = {
    1.000000E+00, 9.635997E-01, 9.362827E-01, 9.130436E-01, 
    8.922817E-01, 8.732430E-01, 8.555006E-01, 8.387836E-01, 
    8.229072E-01, 8.077383E-01, 7.931770E-01, 7.791461E-01, 
    7.655842E-01, 7.524416E-01, 7.396773E-01, 7.272569E-01, 
    7.151515E-01, 7.033361E-01, 6.917892E-01, 6.804919E-01, 
    6.694277E-01, 6.585820E-01, 6.479418E-01, 6.374955E-01, 
    6.272325E-01, 6.171434E-01, 6.072195E-01, 5.974532E-01, 
    5.878370E-01, 5.783647E-01, 5.690300E-01, 5.598274E-01, 
    5.507518E-01, 5.417984E-01, 5.329627E-01, 5.242406E-01, 
    5.156282E-01, 5.071220E-01, 4.987186E-01, 4.904148E-01, 
    4.822077E-01, 4.740943E-01, 4.660721E-01, 4.581387E-01, 
    4.502916E-01, 4.425287E-01, 4.348478E-01, 4.272470E-01, 
    4.197243E-01, 4.122780E-01, 4.049064E-01, 3.976079E-01, 
    3.903808E-01, 3.832238E-01, 3.761355E-01, 3.691145E-01, 
    3.621595E-01, 3.552694E-01, 3.484430E-01, 3.416792E-01, 
    3.349769E-01, 3.283351E-01, 3.217529E-01, 3.152294E-01, 
    3.087636E-01, 3.023548E-01, 2.960021E-01, 2.897049E-01, 
    2.834622E-01, 2.772735E-01, 2.711381E-01, 2.650553E-01, 
    2.590246E-01, 2.530453E-01, 2.471170E-01, 2.412390E-01, 
    2.354109E-01, 2.296323E-01, 2.239027E-01, 2.182216E-01, 
    2.125888E-01, 2.070037E-01, 2.014661E-01, 1.959756E-01, 
    1.905320E-01, 1.851350E-01, 1.797843E-01, 1.744796E-01, 
    1.692209E-01, 1.640079E-01, 1.588404E-01, 1.537183E-01, 
    1.486416E-01, 1.436101E-01, 1.386238E-01, 1.336827E-01, 
    1.287867E-01, 1.239360E-01, 1.191305E-01, 1.143705E-01, 
    1.096560E-01, 1.049873E-01, 1.003644E-01, 9.578785E-02, 
    9.125780E-02, 8.677467E-02, 8.233890E-02, 7.795098E-02, 
    7.361151E-02, 6.932112E-02, 6.508058E-02, 6.089077E-02, 
    5.675266E-02, 5.266740E-02, 4.863629E-02, 4.466086E-02, 
    4.074287E-02, 3.688439E-02, 3.308789E-02, 2.935632E-02, 
    2.569329E-02, 2.210330E-02, 1.859210E-02, 1.516730E-02, 
    1.183948E-02, 8.624485E-03, 5.548995E-03, 2.669629E-03
};

/* Table integer k for exponential distribution */
uint32_t ziggurat_ke[ZIGGURAT_TABLE_EXP_SIZE] = {
    3801129273, 0, 2615860924, 3279400049, 3571300752, 
    3733536696, 3836274812, 3906990442, 3958562475, 
    3997804264, 4028649213, 4053523342, 4074002619, 
    4091154507, 4105727352, 4118261130, 4129155133, 
    4138710916, 4147160435, 4154685009, 4161428406, 
    4167506077, 4173011791, 4178022498, 4182601930, 
    4186803325, 4190671498, 4194244443, 4197554582, 
    4200629752, 4203493986, 4206168142, 4208670408, 
    4211016720, 4213221098, 4215295924, 4217252177, 
    4219099625, 4220846988, 4222502074, 4224071896, 
    4225562770, 4226980400, 4228329951, 4229616109, 
    4230843138, 4232014925, 4233135020, 4234206673, 
    4235232866, 4236216336, 4237159604, 4238064994, 
    4238934652, 4239770563, 4240574564, 4241348362, 
    4242093539, 4242811568, 4243503822, 4244171579, 
    4244816032, 4245438297, 4246039419, 4246620374, 
    4247182079, 4247725394, 4248251127, 4248760037, 
    4249252839, 4249730206, 4250192773, 4250641138, 
    4251075867, 4251497493, 4251906522, 4252303431, 
    4252688672, 4253062674, 4253425844, 4253778565, 
    4254121205, 4254454110, 4254777611, 4255092022, 
    4255397640, 4255694750, 4255983622, 4256264513, 
    4256537670, 4256803325, 4257061702, 4257313014, 
    4257557464, 4257795244, 4258026541, 4258251531, 
    4258470383, 4258683258, 4258890309, 4259091685, 
    4259287526, 4259477966, 4259663135, 4259843154, 
    4260018142, 4260188212, 4260353470, 4260514019, 
    4260669958, 4260821380, 4260968374, 4261111028, 
    4261249421, 4261383632, 4261513736, 4261639802, 
    4261761900, 4261880092, 4261994441, 4262105003, 
    4262211835, 4262314988, 4262414513, 4262510454, 
    4262602857, 4262691764, 4262777212, 4262859239, 
    4262937878, 4263013162, 4263085118, 4263153776, 
    4263219158, 4263281289, 4263340187, 4263395872, 
    4263448358, 4263497660, 4263543789, 4263586755, 
    4263626565, 4263663224, 4263696735, 4263727099, 
    4263754314, 4263778377, 4263799282, 4263817020, 
    4263831582, 4263842955, 4263851124, 4263856071, 
    4263857776, 4263856218, 4263851370, 4263843206, 
    4263831695, 4263816804, 4263798497, 4263776735, 
    4263751476, 4263722676, 4263690284, 4263654251, 
    4263614520, 4263571032, 4263523724, 4263472530, 
    4263417377, 4263358192, 4263294892, 4263227394, 
    4263155608, 4263079437, 4262998781, 4262913534, 
    4262823581, 4262728804, 4262629075, 4262524261, 
    4262414220, 4262298801, 4262177846, 4262051187, 
    4261918645, 4261780032, 4261635148, 4261483780, 
    4261325704, 4261160681, 4260988457, 4260808763, 
    4260621313, 4260425802, 4260221905, 4260009277, 
    4259787550, 4259556329, 4259315195, 4259063697, 
    4258801357, 4258527656, 4258242044, 4257943926, 
    4257632664, 4257307571, 4256967906, 4256612870, 
    4256241598, 4255853155, 4255446525, 4255020608, 
    4254574202, 4254106002, 4253614578, 4253098370, 
    4252555662, 4251984571, 4251383021, 4250748722, 
    4250079132, 4249371435, 4248622490, 4247828790, 
    4246986404, 4246090910, 4245137315, 4244119963, 
    4243032411, 4241867296, 4240616155, 4239269214, 
    4237815118, 4236240596, 4234530035, 4232664930, 
    4230623176, 4228378137, 4225897409, 4223141146, 
    4220059768, 4216590757, 4212654085, 4208145538, 
    4202926710, 4196809522, 4189531420, 4180713890, 
    4169789475, 4155865042, 4137444620, 4111806704, 
    4073393724, 4008685917, 3873074895
};

/* Table real w for exponential distribution */
double ziggurat_we[ZIGGURAT_TABLE_EXP_SIZE] = {
    2.024956E-09, 1.486674E-11, 2.440962E-11, 3.196881E-11, 
    3.844677E-11, 4.422820E-11, 4.951644E-11, 5.443359E-11, 
    5.905944E-11, 6.344942E-11, 6.764381E-11, 7.167295E-11, 
    7.556032E-11, 7.932458E-11, 8.298079E-11, 8.654132E-11, 
    9.001652E-11, 9.341507E-11, 9.674443E-11, 1.000110E-10, 
    1.032203E-10, 1.063773E-10, 1.094861E-10, 1.125507E-10, 
    1.155743E-10, 1.185601E-10, 1.215108E-10, 1.244289E-10, 
    1.273165E-10, 1.301757E-10, 1.330085E-10, 1.358166E-10, 
    1.386014E-10, 1.413646E-10, 1.441074E-10, 1.468311E-10, 
    1.495369E-10, 1.522258E-10, 1.548990E-10, 1.575573E-10, 
    1.602017E-10, 1.628330E-10, 1.654520E-10, 1.680595E-10, 
    1.706562E-10, 1.732427E-10, 1.758197E-10, 1.783879E-10, 
    1.809477E-10, 1.834999E-10, 1.860448E-10, 1.885830E-10, 
    1.911150E-10, 1.936413E-10, 1.961622E-10, 1.986784E-10, 
    2.011900E-10, 2.036977E-10, 2.062017E-10, 2.087024E-10, 
    2.112002E-10, 2.136955E-10, 2.161886E-10, 2.186797E-10, 
    2.211694E-10, 2.236577E-10, 2.261452E-10, 2.286320E-10, 
    2.311185E-10, 2.336049E-10, 2.360916E-10, 2.385787E-10, 
    2.410667E-10, 2.435556E-10, 2.460459E-10, 2.485377E-10, 
    2.510313E-10, 2.535269E-10, 2.560249E-10, 2.585254E-10, 
    2.610287E-10, 2.635349E-10, 2.660445E-10, 2.685575E-10, 
    2.710742E-10, 2.735948E-10, 2.761196E-10, 2.786488E-10, 
    2.811825E-10, 2.837212E-10, 2.862648E-10, 2.888138E-10, 
    2.913683E-10, 2.939284E-10, 2.964945E-10, 2.990668E-10, 
    3.016454E-10, 3.042306E-10, 3.068227E-10, 3.094218E-10, 
    3.120281E-10, 3.146420E-10, 3.172635E-10, 3.198930E-10, 
    3.225306E-10, 3.251767E-10, 3.278313E-10, 3.304949E-10, 
    3.331674E-10, 3.358494E-10, 3.385408E-10, 3.412421E-10, 
    3.439534E-10, 3.466750E-10, 3.494071E-10, 3.521500E-10, 
    3.549040E-10, 3.576692E-10, 3.604460E-10, 3.632346E-10, 
    3.660352E-10, 3.688482E-10, 3.716739E-10, 3.745124E-10, 
    3.773641E-10, 3.802293E-10, 3.831083E-10, 3.860013E-10, 
    3.889087E-10, 3.918307E-10, 3.947677E-10, 3.977201E-10, 
    4.006880E-10, 4.036720E-10, 4.066722E-10, 4.096890E-10, 
    4.127229E-10, 4.157741E-10, 4.188430E-10, 4.219299E-10, 
    4.250354E-10, 4.281597E-10, 4.313033E-10, 4.344665E-10, 
    4.376499E-10, 4.408537E-10, 4.440785E-10, 4.473246E-10, 
    4.505927E-10, 4.538830E-10, 4.571962E-10, 4.605327E-10, 
    4.638929E-10, 4.672775E-10, 4.706870E-10, 4.741219E-10, 
    4.775828E-10, 4.810702E-10, 4.845848E-10, 4.881271E-10, 
    4.916980E-10, 4.952977E-10, 4.989273E-10, 5.025872E-10, 
    5.062784E-10, 5.100013E-10, 5.137569E-10, 5.175458E-10, 
    5.213690E-10, 5.252273E-10, 5.291214E-10, 5.330522E-10, 
    5.370208E-10, 5.410281E-10, 5.450750E-10, 5.491625E-10, 
    5.532918E-10, 5.574639E-10, 5.616799E-10, 5.659411E-10, 
    5.702486E-10, 5.746037E-10, 5.790077E-10, 5.834621E-10, 
    5.879682E-10, 5.925276E-10, 5.971417E-10, 6.018122E-10, 
    6.065408E-10, 6.113292E-10, 6.161793E-10, 6.210930E-10, 
    6.260722E-10, 6.311192E-10, 6.362360E-10, 6.414250E-10, 
    6.466885E-10, 6.520293E-10, 6.574498E-10, 6.629529E-10, 
    6.685416E-10, 6.742188E-10, 6.799880E-10, 6.858526E-10, 
    6.918162E-10, 6.978826E-10, 7.040560E-10, 7.103407E-10, 
    7.167412E-10, 7.232626E-10, 7.299099E-10, 7.366886E-10, 
    7.436047E-10, 7.506645E-10, 7.578748E-10, 7.652426E-10, 
    7.727760E-10, 7.804830E-10, 7.883728E-10, 7.964551E-10, 
    8.047402E-10, 8.132396E-10, 8.219657E-10, 8.309319E-10, 
    8.401528E-10, 8.496445E-10, 8.594247E-10, 8.695127E-10, 
    8.799301E-10, 8.907005E-10, 9.018503E-10, 9.134092E-10, 
    9.254101E-10, 9.378904E-10, 9.508923E-10, 9.644638E-10, 
    9.786603E-10, 9.935448E-10, 1.009191E-09, 1.025686E-09, 
    1.043131E-09, 1.061647E-09, 1.081380E-09, 1.102510E-09, 
    1.125256E-09, 1.149899E-09, 1.176793E-09, 1.206409E-09, 
    1.239379E-09, 1.276585E-09, 1.319314E-09, 1.369543E-09, 
    1.430550E-09, 1.508365E-09, 1.616085E-09, 1.792125E-09
};

/* Table function f for exponential distribution */
double ziggurat_fe[ZIGGURAT_TABLE_EXP_SIZE] = {
    1.000000E+00, 9.381437E-01, 9.004700E-01, 8.717043E-01, 
    8.477855E-01, 8.269933E-01, 8.084217E-01, 7.915276E-01, 
    7.759569E-01, 7.614634E-01, 7.478686E-01, 7.350381E-01, 
    7.228677E-01, 7.112747E-01, 7.001926E-01, 6.895665E-01, 
    6.793506E-01, 6.695063E-01, 6.600009E-01, 6.508058E-01, 
    6.418967E-01, 6.332520E-01, 6.248527E-01, 6.166822E-01, 
    6.087254E-01, 6.009690E-01, 5.934009E-01, 5.860103E-01, 
    5.787874E-01, 5.717230E-01, 5.648092E-01, 5.580383E-01, 
    5.514034E-01, 5.448982E-01, 5.385169E-01, 5.322539E-01, 
    5.261042E-01, 5.200632E-01, 5.141264E-01, 5.082898E-01, 
    5.025495E-01, 4.969020E-01, 4.913439E-01, 4.858720E-01, 
    4.804834E-01, 4.751752E-01, 4.699448E-01, 4.647897E-01, 
    4.597076E-01, 4.546961E-01, 4.497533E-01, 4.448769E-01, 
    4.400651E-01, 4.353161E-01, 4.306282E-01, 4.259996E-01, 
    4.214287E-01, 4.169142E-01, 4.124545E-01, 4.080482E-01, 
    4.036940E-01, 3.993907E-01, 3.951370E-01, 3.909317E-01, 
    3.867738E-01, 3.826622E-01, 3.785958E-01, 3.745736E-01, 
    3.705947E-01, 3.666581E-01, 3.627630E-01, 3.589085E-01, 
    3.550937E-01, 3.513180E-01, 3.475805E-01, 3.438804E-01, 
    3.402171E-01, 3.365899E-01, 3.329981E-01, 3.294410E-01, 
    3.259180E-01, 3.224285E-01, 3.189719E-01, 3.155477E-01, 
    3.121552E-01, 3.087941E-01, 3.054636E-01, 3.021634E-01, 
    2.988929E-01, 2.956517E-01, 2.924393E-01, 2.892552E-01, 
    2.860991E-01, 2.829704E-01, 2.798688E-01, 2.767939E-01, 
    2.737453E-01, 2.707226E-01, 2.677254E-01, 2.647534E-01, 
    2.618062E-01, 2.588835E-01, 2.559850E-01, 2.531103E-01, 
    2.502591E-01, 2.474311E-01, 2.446260E-01, 2.418435E-01, 
    2.390833E-01, 2.363452E-01, 2.336288E-01, 2.309339E-01, 
    2.282603E-01, 2.256077E-01, 2.229758E-01, 2.203644E-01, 
    2.177732E-01, 2.152022E-01, 2.126509E-01, 2.101192E-01, 
    2.076068E-01, 2.051136E-01, 2.026394E-01, 2.001840E-01, 
    1.977471E-01, 1.953285E-01, 1.929282E-01, 1.905458E-01, 
    1.881812E-01, 1.858343E-01, 1.835048E-01, 1.811926E-01, 
    1.788975E-01, 1.766195E-01, 1.743582E-01, 1.721135E-01, 
    1.698854E-01, 1.676736E-01, 1.654780E-01, 1.632985E-01, 
    1.611349E-01, 1.589871E-01, 1.568550E-01, 1.547384E-01, 
    1.526371E-01, 1.505512E-01, 1.484804E-01, 1.464246E-01, 
    1.443837E-01, 1.423576E-01, 1.403462E-01, 1.383494E-01, 
    1.363671E-01, 1.343991E-01, 1.324453E-01, 1.305057E-01, 
    1.285802E-01, 1.266686E-01, 1.247709E-01, 1.228870E-01, 
    1.210167E-01, 1.191601E-01, 1.173169E-01, 1.154872E-01, 
    1.136708E-01, 1.118676E-01, 1.100777E-01, 1.083008E-01, 
    1.065370E-01, 1.047861E-01, 1.030482E-01, 1.013230E-01, 
    9.961058E-02, 9.791085E-02, 9.622374E-02, 9.454919E-02, 
    9.288713E-02, 9.123752E-02, 8.960028E-02, 8.797538E-02, 
    8.636274E-02, 8.476233E-02, 8.317409E-02, 8.159798E-02, 
    8.003395E-02, 7.848195E-02, 7.694194E-02, 7.541389E-02, 
    7.389775E-02, 7.239348E-02, 7.090106E-02, 6.942043E-02, 
    6.795159E-02, 6.649449E-02, 6.504912E-02, 6.361543E-02, 
    6.219342E-02, 6.078305E-02, 5.938431E-02, 5.799717E-02, 
    5.662164E-02, 5.525769E-02, 5.390531E-02, 5.256449E-02, 
    5.123524E-02, 4.991753E-02, 4.861138E-02, 4.731679E-02, 
    4.603376E-02, 4.476230E-02, 4.350241E-02, 4.225412E-02, 
    4.101744E-02, 3.979239E-02, 3.857899E-02, 3.737728E-02, 
    3.618728E-02, 3.500904E-02, 3.384258E-02, 3.268796E-02, 
    3.154523E-02, 3.041444E-02, 2.929566E-02, 2.818895E-02, 
    2.709438E-02, 2.601205E-02, 2.494203E-02, 2.388442E-02, 
    2.283934E-02, 2.180689E-02, 2.078720E-02, 1.978042E-02, 
    1.878670E-02, 1.780620E-02, 1.683911E-02, 1.588562E-02, 
    1.494597E-02, 1.402039E-02, 1.310917E-02, 1.221259E-02, 
    1.133101E-02, 1.046481E-02, 9.614414E-03, 8.780315E-03, 
    7.963077E-03, 7.163353E-03, 6.381906E-03, 5.619642E-03, 
    4.877656E-03, 4.157295E-03, 3.460265E-03, 2.788799E-03, 
    2.145968E-03, 1.536300E-03, 9.672693E-04, 4.541344E-04
};

