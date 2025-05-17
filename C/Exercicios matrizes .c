#include <stdio.h>
#include <stdlib.h>


void matrizTridimensional(){ // exercício 1
	
	int matriz[3][3];
	
	int i,j;
	
	for(i =0; i <3; i++){
		for(j = 0; j <3 ; j++){
			scanf("%i", &matriz[i][j]);
		}
	}
	for(i =0; i <3; i++){
		for(j = 0; j <3 ; j++){
			printf("%i", matriz[i][j]);
			if (i == 3){
				printf("\n");
			}
				
		}
		printf("\n");	
	}
		
}


void matrizBindimensional(){
	
	
	int matriz [2][2]; // 1 - linhas, e 2 - colunas
	
	int i,j, count;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			scanf("%i", &matriz[i][j]);
		}
	}
	
	printf("\n");
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%i", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i = 0; i < 2;i++){
		count = matriz[i][0]; // linha começa no 0, armazena o valor da coluna 1
		matriz[i][0] = matriz[i][1]; // substitui o valor da coluna 1 pela coluna 2
		matriz[i][1] = count; // susbtitui o valor da coluna 2 pela coluna 1
	}
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%i", matriz[i][j]);
		}
		printf("\n");
	}	

}

void matrizMultiplicada(){
	int i,j,x,y,z,a,k;
	
	printf("quantidades de linhas da matrizA:\n");
	scanf(" %i", &x);
	printf("quantidades de colunas da matrizA:\n");
	scanf(" %i", &y);
	
	printf("quantidades de linhas da matrizB:\n");
	scanf(" %i", &z);
	printf("quantidades de colunas da matrizB:\n");
	scanf(" %i", &a);
	
	
	
	int matrizA[x][y];
	
	int matrizB[z][a];
	
	int matrizM[x][a];
	
	for(i = 0; i < x; i++){
		for(j = 0; j < y; j++){
			scanf("%i", &matrizA[i][j]);
		}
	}
	
	for(i = 0; i < x; i++){
		for(j = 0; j < y; j++){
			printf("%2i", matrizA[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < z; i++){
		for(j = 0; j < a; j++){
			scanf("%i", &matrizB[i][j]);
		}
	}
	
	for(i = 0; i < z; i++){
		for(j = 0; j < a; j++){
			printf("%2i", matrizB[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < x; i++){
		for(j = 0; j < a; j++){
			matrizM[i][j] = 0;			
		}
	}
	 
	for(i = 0; i < x; i++) {
        for(j = 0; j < a; j++) {
            for(k = 0; k < y; k++) {
                matrizM[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
    
    for(i = 0; i < x; i++){
		for(j = 0; j < a; j++){
			printf("%3i", matrizM[i][j]);
		}
	}
}

void matrizSoma(){
	
	int i, j , linhaA , colunaA , linhaB , colunaB ;
	
	printf("Digite a linhas da MatrizA:\n");
	scanf("%i", &linhaA);
	
	printf("Digite a colunas da MatrizA:\n");
	scanf("%i", &colunaA);
	
	printf("Digite a linhas da MatrizB:\n");
	scanf("%i", &linhaB);
	
	printf("Digite a colunas da MatrizB:\n");
	scanf("%i", &colunaB);
	
	if(colunaA =! linhaB){
		printf("o numero de coluna A deve ser igual ao numero de linhas da matriz B");
		return 1;		
	}
	
	int matrizA[linhaA][colunaA];
	
	int matrizB[linhaB][colunaB];
	
	int matrizS[linhaA][colunaB]; // abrange todas as matrizes
	
	for(i = 0; i < linhaA; i++){
		for(j = 0; j < colunaA; j++){
				scanf("%i", &matrizA[i][j]);	
		}
	}
	for(i = 0; i < linhaA; i++){
		for(j = 0; j < colunaA; j++){
				printf("%3i", matrizA[i][j]);	
		}
		printf("\n");
	}
	for(i = 0; i < linhaB; i++){
		for(j = 0; j < colunaB; j++){
				scanf("%i", &matrizB[i][j]);	
		}
	}
	for(i = 0; i < linhaB; i++){
		for(j = 0; j < colunaB; j++){
				printf("%3i", matrizB[i][j]);	
		}
		printf("\n");
	}
	
	for(i = 0; i < linhaA; i++){
		for(j = 0; j < colunaB; j++){
			matrizS[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}
	for(i = 0; i < linhaA; i++){
		for(j = 0; j < colunaB; j++){
			printf("%2i", matrizS[i][j]);
		}
		
	}
	
}

int main()
{
	matrizSoma();
	return 0;
}