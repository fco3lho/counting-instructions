#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXTAM 100

int createMatrix(int tam, int matrix[tam][tam]){ //Função para criar a matriz
	
	srand(time(NULL));
	
	for(int i = 0; i < tam; i++){
		for(int j = 0; j < tam; j++){
			matrix[i][j] = rand() % MAXTAM;
		}
	}
}

void printMatrix(int tam, int matrix[tam][tam]){ // Função para printar a matriz
	
	for(int i = 0; i < tam; i++){
		for(int j = 0; j < tam; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
}

int runMatrix(int tam, int matrix[tam][tam], int sum){ // Função para correr a matriz

	int i = 0, j = 0, checker = 0; 
	sum = matrix[0][0];

	if(tam > 1){
		printf("\nCaminho percorrido desde a posição [0][0] até a posição [%d][%d]: ", tam, tam);

		while(checker != 1){

			if((j == 0) && (i < (tam-1))){ // Para caso a posição da matriz esteja localizada na primeira coluna e demais linhas, exceto última linha.
				
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

			else if((j > 0)&&(j < (tam-1)) && (i < (tam-1))){ // Para caso a posição da matriz esteja localizada entre a primeira e última coluna e demais linhas, exceto última linha.

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

			else if((j == (tam-1)) && (i < (tam-1))){ // Para caso a posição da matriz esteja localizada na última coluna e demais linhas, exceto última linha.

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

			else if((i == (tam-1)) && (j == (tam-1))){
				checker = 1;
			}

			else if(i == (tam-1)){
				sum = sum + matrix[i][j+1];
				printf("Right ");
				j++;
			}
		}
	}

	else if((tam == 1) || (tam <= 0)){
		printf("\nO caminho a ser percorrido é muito pequeno ou o valor inserido é inválido.");
	}

	printf("\nA soma dos elementos percorridos é: %d\n", sum);
	printf("--------------------------------------------------\n\n");
}

void menu(){ // Menu
	printf("\n	MENU\n\n");
	printf("Para criar uma nova matriz, digite 1.\n");
	printf("Para sair do programa, digite 0.\n\n");
}

int main(){
	
	int n, i, j, sum, opt = -1;
		
	menu();

	while(opt != 0){
		printf("Option: ");
		scanf("%d", &opt);
		printf("\n");

		if(opt == 1){
			printf("Insira o tamanho da matriz quadrada: ");
			scanf("%d", &n);

			int mat[n][n];

			createMatrix(n, mat);
			printMatrix(n, mat);
			runMatrix(n, mat, sum);
		}

		else if(opt == 0){
			printf("\nFinalizando programa...\n");
		}

		else{
			printf("\nOpção inválida, tente novamente.\n\n");
		}
	}

	return 0;
}
