#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a,b;

a=2;

b=2;

int main()
{
	int somaAcomB = a+3*b;
	printf("%i\n", somaAcomB);
	
	int potBcomA = pow(b,a);
	printf("%i\n", potBcomA);
	
	
	int RaizAcomB = sqrt(a+b);
	printf("%i\n", potBcomA);
	
	int DivisaoAeBporAmaisB = (a*pow(b,2))/(a+b);
	printf("%i\n", DivisaoAeBporAmaisB);
}