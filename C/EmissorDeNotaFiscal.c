#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *arquivo;

int codigoDoProduto, quantidade, i;

float valorUnitario, valorTotal;

int contadorDeNotas = 1;

char descricao[100];

void criarArquivo(){
	arquivo = fopen("C://Users//joaos//EmissorDeNota//notas.txt","w+");
	if( arquivo == 0){
		printf("seu arquivo nao foi criado");
	}
	else
	printf("Seu arquivo foi criado\n");
}

void dadosDoProduto(){
	char buffer [100];
	printf("+==========================+\n");
	printf("Digite o codigo do produto\n");
	fgets(buffer, sizeof(buffer), stdin); // essa combinação de fgets + sscanf é absolutamente boa
	sscanf(buffer, "%i", &codigoDoProduto); // transforma o buffer em inteiro
	printf("Digite a descricao\n");
	fgets(descricao, sizeof(descricao), stdin);
 	descricao[strcspn(descricao,"\n")] = "\0"; // vai tirar o "\n", gerado pelo fgets
	printf("Digite a quantidade:\n");
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer,"%i", &quantidade);
	printf("Digite o valor unitario:\n");
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%f", &valorUnitario);
	valorTotal = valorUnitario*quantidade;
	}

void emitirNota(){
	fprintf(arquivo, "Codigo: %i\n", codigoDoProduto);
	fprintf(arquivo,"Descricao: %s\n", descricao);
	fprintf(arquivo, "Digite a quantidade: %i\n", quantidade);
	fprintf(arquivo, "Digite o valor unitario: %f\n", valorUnitario);
	fprintf(arquivo, "Valor total: %.2f\n", valorTotal);
}

int main (){
	criarArquivo();
	while(i <= contadorDeNotas)
	{
		dadosDoProduto();
		emitirNota();
		i++;
	}
	fclose(arquivo);
}