#include <iostream>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <algorithm>
#include "mpi.h"

/* merge.cpp */
void mergesort(int* a, int n, int my_rank, int p);
void smerge(int* a, int a0, int a1, int* b, int b0, int b1, int* c, int c0, int c1);
void pmerge(int*a, int first, int last, int mid, int my_rank, int p);
void swap(int* a, int x, int y);

/* rank.cpp */
/* gotta use uppercase R
 * because prototype conflicts with std::rank.
 */
int Rank(int* a, int last, int valToFind);

/* genarr.cpp */
int* genarr(int n);

/* main.cpp */
int main(int argc, char ** argv);
