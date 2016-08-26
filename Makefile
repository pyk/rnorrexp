# Makefile for building rnorrexp.c
CFLAGS=-std=c99 -pedantic
LDFLAGS=-lm

default: rnorrexp

rnorrexp: rnorrexp.c
	$(CC) $(CFLAGS) rnorrexp.c -o rnorrexp $(LDFLAGS)

