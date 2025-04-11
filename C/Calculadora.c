#include <stdio.h>
#include <stdlib.h>

float calc = 1;

int main(){
	while(calc == 1)
	{
	float selector , num1, num2;
	printf("=======Caculadora=======\n");
	printf("digite 1 - para somar\n");
	printf("digite 2 - para subtrair\n");
	printf("digite 3 - para multiplicar\n");
	printf("digite 4 - para dividir\n");
	printf("digite 5 - para sair\n");
	
	printf("digite o que voce vai querer:");
	scanf ("%f", &selector);
	
	if (selector == 1){
		   printf("digite o primeiro numero:");
		   scanf("%f", &num1);
		   printf("digite o segundo numero:");
		   scanf("%f", &num2);
		   printf("resultado:%.2f",num1+num2);
		   printf("\n");
		   system("pause");		   
		   system("cls");
	}
	else if (selector == 2){
		   printf("digite o primeiro numero:");
		   scanf("%f", &num1);
		   printf("digite o segundo numero:");
		   scanf("%f", &num2);
		   printf("resultado:%.2f",num1-num2);
		   printf("\n");
		   system("pause");		   
		   system("cls");
		
	}
	else if(selector == 3){
		   printf("digite o primeiro numero:");
		   scanf("%f", &num1);
		   printf("digite o segundo numero:");
		   scanf("%f", &num2);
		   printf("resultado:%.2f",num1*num2);
		   printf("\n");
		   system("pause");		   
		   system("cls");
	}
	else if(selector == 4){
		   printf("digite o primeiro numero:");
		   scanf("%f", &num1);
		   printf("digite o segundo numero:");
		   scanf("%f", &num2);
		   printf("resultado:%.2f",num1/num2);
		   printf("\n");
		   system("pause");		   
		   system("cls");
	}
	
	if (selector == 5){
		calc = 2;
	}
}
}