#include <countingInstructions.h>

int createMatrix(int n, int matrix[n][n]){
    
    srand(time(NULL));
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			matrix[i][j] = rand() % 100;
		}
	}
	
	printf("\n");
}

void printMatrix(int n, int matrix[n][n]){
    
    printf("\tMatriz\n\n");
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
}
