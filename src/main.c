#include "matrix.h"

int main() {
	
	int tam, sum = 0, opt = -1;

	menu();

	while(opt != 0){
		printf("Option: ");
		scanf("%d", &opt);
		printf("\n");

		if(opt == 1){
			printf("Insira o tamanho da matriz quadrada: ");
			scanf("%d", &tam);

			int mat[tam][tam];

			createMatrix(tam, mat);
			printMatrix(tam, mat);
			runMatrix(tam, mat, sum);
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
