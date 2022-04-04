#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAXTAM 100

int n;
int matrix[MAXTAM][MAXTAM];

int createMatrix(int n, int matrix[n][n]);
void printMatrix(int n, int matrix[n][n]);
int runMatrix(int n, int matrix[n][n], int sum);
void menu();

#endif