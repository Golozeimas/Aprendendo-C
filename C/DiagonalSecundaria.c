#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i;
	
	int matriz[4][4] = {
        { 1,  2,  3,  4 },
        { 5,  6,  7,  8 },
        { 9, 10, 11, 12 },
        {13, 14, 15, 16 }
    };
    
    for(i = 0; i < 4; i++){
		printf("%i", matriz[i][3-i]); // o segundo i come�a com 0, e vai at� "- 3", printando a diagonal secund�ria;
		printf("\n");
	}
	
	
	
	
	int soma = 0;
	for(i = 0; i < 4; i++){
		soma += matriz[i][3 - i]; 
	}
		
		printf("soma da diagonal secund�ria:%i\n", soma);
	
	
	return 0;
}