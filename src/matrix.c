#include "matrix.h"

int createMatrix(int n, int matrix[n][n]){
	srand(time(NULL));
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			matrix[i][j] = rand() % MAXTAM;
		}
	}
}

void printMatrix(int n, int matrix[n][n]){
		
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

int runMatrix(int n, int matrix[n][n], int sum){
	int i = 0, j = 0, checker = 0; 
	sum = matrix[0][0];

	if(n > 1){
		printf("\nCaminho percorrido desde a posição [0][0] até a posição [%d][%d]: ", n, n);

		while(checker != 1){

			if((j == 0) && (i < (n-1))){ // Para caso a posição da matriz esteja localizada na primeira coluna e demais linhas, exceto última linha.
				
				if(matrix[i][j+1] > matrix[i+1][j]){
					sum = sum + matrix[i][j+1];
					printf("Right ");
					matrix[i][j] = -1;
					j++;
				}

				else if(matrix[i+1][j] > matrix[i][j+1]){
					sum = sum + matrix[i+1][j];
					printf("Down ");
					matrix[i][j] = -1;
					i++;
				}

				else if(matrix[i+1][j] == matrix[i][j+1]){
					sum = sum + matrix[i+1][j];
					printf("Down ");
					matrix[i][j] = -1;
					i++;
				}
			}

			else if((j > 0)&&(j < (n-1)) && (i < (n-1))){ // Para caso a posição da matriz esteja localizada entre a primeira e última coluna e demais linhas, exceto última linha.

				if((matrix[i][j+1] > matrix[i+1][j]) && (matrix[i][j+1] > matrix[i][j-1])){
					sum = sum + matrix[i][j+1];
					printf("Right ");
					matrix[i][j] = -1;
					j++;
				}

				else if((matrix[i+1][j] > matrix[i][j+1]) && (matrix[i+1][j] > matrix[i][j-1])){
					sum = sum + matrix[i+1][j];
					printf("Down ");
					matrix[i][j] = -1;
					i++;
				}

				else if((matrix[i][j-1] > matrix[i+1][j]) && (matrix[i][j-1] > matrix[i][j+1])){
					sum = sum + matrix[i][j-1];
					printf("Left ");
					matrix[i][j] = -1;
					j--;
				}

				else{
					sum = sum + matrix[i+1][j];
					printf("Down ");
					matrix[i][j] = -1;
					i++;
				}
			}

			else if((j == (n-1)) && (i < (n-1))){ // Para caso a posição da matriz esteja localizada na última coluna e demais linhas, exceto última linha.

				if(matrix[i+1][j] > matrix[i][j-1]){
					sum = sum + matrix[i+1][j];
					printf("Down ");
					matrix[i][j] = -1;
					i++;
				}

				else if(matrix[i][j-1] > matrix[i+1][j]){
					sum = sum + matrix[i][j-1];
					printf("Left ");
					matrix[i][j];
					j--;
				}

				else{
					sum = sum + matrix[i+1][j];
					printf("Down ");
					matrix[i][j] = -1;
					i++;
				}
			}

			else if((i == (n-1)) && (j == (n-1))){
				checker = 1;
			}

			else if(i == (n-1)){
				sum = sum + matrix[i][j+1];
				printf("Right ");
				j++;
			}
		}
	}

	else if((n == 1) || (n <= 0)){
		printf("\nO caminho a ser percorrido é muito pequeno ou o valor inserido é inválido.");
	}

	printf("\nA soma dos elementos percorridos é: %d\n", sum);
	printf("--------------------------------------------------\n\n");	
}

void menu(){
	printf("\n	MENU\n\n");
	printf("Para criar uma nova matriz, digite 1.\n");
	printf("Para sair do programa, digite 0.\n\n");
}