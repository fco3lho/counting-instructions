#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXTAM 100

int main(){
	
	int n;
	int matriz[n][n];
	int i, j;
		
	
	
	printf("Insira o tamanho da matriz quadrada: ");
	scanf("%i", &n);
	
	srand(time(NULL));
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			matriz[i][j] = rand() % MAXTAM;
		}
	}
	
	for(i = 0; i < n; i++){
		printf("\n");
		for(j = 0; j < n; j++){
			printf("%d ", matriz[i][j]);
		}
	}
	
	return 0;
}
