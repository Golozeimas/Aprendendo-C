#include <stdio.h>
#include <stdlib.h>

int n,i;

struct Pessoa
{
	char nome [20];
	int idade;
	float altura;
};

int main(){
	printf("Quantidades de pessoas que quer cadastrar:\n");
	scanf("%i", &n);
	
	struct Pessoa pessoa[n];
	
	
	for(i = 0; i<n; i++){
        printf("Coloque seu nome:\n");
		scanf(" %[^\n]", &pessoa[i].nome); // usa o [i], para acessar a matriz, como na outras matrizes
		printf("Coloque sua idade:\n");			
		scanf("%i", &pessoa[i].idade);
	}
	
	for(i = 0; i<n;i++){
		printf("%s",pessoa[i].nome);
	}
}