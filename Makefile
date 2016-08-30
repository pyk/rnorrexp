# Makefile for building rnorrexp.c
CFLAGS=-std=c99 -pedantic -O3
LDFLAGS=-lm

default: rnorrexp

rnorrexp: rnorrexp.c
	$(CC) $(CFLAGS) rnorrexp.c -o rnorrexp $(LDFLAGS)

ziggurat_table_generator: ziggurat_table_generator.c
	$(CC) $(CFLAGS) ziggurat_table_generator.c -o ziggurat_table_generator $(LDFLAGS)

