#include <stdio.h>
#include <stdlib.h>


int main()
{
	int valor;
	
	printf("Digite um valor, para verficar se � par ou �mpar\n");
	
	scanf("%i", &valor);
	
	if(valor == 0){
		printf("erro! tente de novo\n");
		main();
	}
	
	if(valor%2 == 0){
		printf("esse numero e par\n");
	}
	else
	{
		printf("esse numero e impar\n");
	}
	
	return 0;
}