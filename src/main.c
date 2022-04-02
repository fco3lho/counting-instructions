#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int tam;

    printf("Insira o tamanho da matriz: ");
    scanf("%d", &tam);

    int matrix[tam][tam];

    createMatrix(tam, matrix);
    printMatrix(tam, matrix);

    return 0;
}
