#ifndef COUNTINSTRUCTIONS_H
#define COUNTINSTRUCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXTAM 100

int n = 0;
int matrix[MAXTAM][MAXTAM];

int createMatrix(int n, int matrix[n][n]);
void printMatrix(int n, int matrix[n][n]);

#endif