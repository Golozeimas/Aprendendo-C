#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double area, raio, pi;


int main(){
	
	printf("Coloque o raio da conta:\n");   	   
	
	scanf("%lf", &raio);
	
	pi = 3.14159;
	
	area = pi*pow(raio,2);;
	
	printf("A=%.4f\n", area); 	   
}