#include <stdio.h>
#include <stdlib.h>



double soma (double num1, double num2);

int main(){
	double resultado = soma(20,10);
	printf("%.2f", resultado);
}


double soma (double num1, double num2){ //soma dois números
	return num1+num2;	
}