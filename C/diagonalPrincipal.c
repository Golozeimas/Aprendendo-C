#include <stdio.h>
#include <stdlib.h>

// caso seja aqui, não é necessário inicializar (int soma;)

int main(){
	int i;
	int matriz[4][4] = {
        { 1,  2,  3,  4 },
        { 5,  6,  7,  8 },
        { 9, 10, 11, 12 },
        {13, 14, 15, 16 }
    };
    
    printf("Diagonal Principal:\n");
    
    for(i = 0; i < 4; i++){
		printf("%1i", matriz[i][i]); // tá pegando a linha de inicial que é igual a coluna;
	    printf("\n");				// diagonal principal é todos linha == coluna;

	}
	
	printf("\n");
	
	
	soma = 0; // inicializei a variável, pq é importante dentro de funções e do main fazer o mesmo
	
	printf("Soma da diagonal principal:\n");
	for(i = 0; i < 4; i++){
		soma += matriz[i][i]; // somei todos os começos de linhas == coluna
	}
	
	printf("%i", soma); // mostra o resultado, importante !! INICIALIZE A VARIÁVEL

}