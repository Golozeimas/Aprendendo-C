#include <stdio.h>
#include <stdlib.h>

float num1, num2;
int c;


int main(){
	   	   
	    do {
	    	menu();
	    	if (c != 0){
			printf("Digite o numero 1:\n");
		    scanf("%f", &num1);
		    printf("Digite o numero 2:\n");
		    scanf("%f", &num2);
			}
			else
			{
				break;
			}
   		 
	   	   switch (c){
		   case 1:
		   	soma();
			   break;
		   case 2:
		   	subtracao();
			   break;
		   case 3:
		   	multiplicacao();
		   	   break;
		   case 4:
		   	divisao();
		   	   break;
		   default:
		   	printf("opcao invalida, repita\n");
			   break;			  
	   }
	   }
	   while(c != 0);
}

void soma(){
	   float result = num1 + num2;
	   printf("resultado:%.2f\n", result);
}
void subtracao(){
	   	float result = num1 - num2;
	   	printf("resultado:%.2f\n", result);
}
void multiplicacao(){
	   	float result = num1 * num2;
	   	printf("resultado:%.2f\n", result);
}
void divisao(){
	   	float result = num1 / num2;
	   	printf("resultado:%.2f\n", result);
}
void menu(){
	        printf("====+Calculadora+====\n");
	   	    printf("Digite 1, para adicao\n");
	   	    printf("Digite 2, para subtrair\n");
	   	    printf("Digite 3, para multiplicacao\n");
	   	    printf("Digite 4, para divisao\n");
	   	    printf("Digite 0, para sair\n");
	   	    scanf("%i", &c);
	   	    system("cls");
}