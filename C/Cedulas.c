#include <stdio.h>
#include <stdlib.h>



int main(){
	
	int N,c100,c50,c20,c10,c5,c2,c1, resto;
	
	scanf("%i", &N);
	
	c100 = N/100;
	resto = N%100;
	c50 = resto/50;
	resto = resto%50;
	c20 = resto/20;
	resto = resto%20;
	c10 = resto/10;
	resto = resto%10;
	c5 = resto/5;
	resto = resto%5;
	c2 = resto/2;
	resto = resto%2;
	c1 = resto;
	
	
	printf("%i nota(s) de R$ 100,00\n", c100);
	printf("%i nota(s) de R$ 50,00\n", c50);
	printf("%i nota(s) de R$ 20,00\n", c20);
	printf("%i nota(s) de R$ 10,00\n", c10);
	printf("%i nota(s) de R$ 5,00\n", c5);
	printf("%i nota(s) de R$ 2,00\n", c2);
	printf("%i nota(s) de R$ 1,00", c1);
		

	return 0;	
}