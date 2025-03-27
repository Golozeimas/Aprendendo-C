#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max_Client 100
#define Max_Str 100

typedef struct {
	char nome[Max_Str]; // uso do máximo de caracteres suportados no caso já definido para 100 
	char cpf[15]; // definição das variáveis usadas
	char telefone[12];
	char endereco[Max_Str];
}Cliente; // nome da estrutura

Cliente clientes [Max_Client];

int quantidade_de_clientes = 0; // contador do array

void CadastrarClientes(){ // função de cadastrar clientes na lista
 	if(quantidade_de_clientes > Max_Client){ // se quantidade de clientes for maior que o máximo suportado, retorne
		 printf("Número máximo de clientes atingido.\n");
		 return;
			 }
			 system("cls");
			Cliente c; // serve como instância guardando dados por enquanto
			
			printf("Digite o nome do cliente:\n");
			fgets(c.nome, Max_Str, stdin);
			c.nome[strcspn(c.nome, "\n")] = '\0';
			
			printf("Digite o numero do CPF:\n");
			fgets(c.cpf, sizeof(c.cpf),stdin);
			c.cpf[strcspn(c.cpf, "\n")] = '\0';
			
			printf("Digite o numero do celular:\n");
			fgets(c.telefone, sizeof(c.telefone),stdin);
			c.telefone[strcspn(c.telefone, "\n")] = '\0';
			
			printf("Digite o endereco:\n");
			fgets(c.endereco, Max_Str ,stdin);
			
		    clientes[quantidade_de_clientes++] = c;
            printf("cliente cadastrado com sucesso!\n");
       }
       
	   	   	   	   	   
void ListarClientes(){ // função de listar clientes no sistema
	if (quantidade_de_clientes == 0){ // caso o número de clientes registrados for zero, retorne 0
		printf("Nenhum cliente estar cadastrado no nosso sistema\n");
		return;
	}
	system("cls");
	int i;
	for(i = 0; i < quantidade_de_clientes; i++){
			printf("Cliente%d:\n", i + 1);
			printf("Nome:%s\n", clientes[i].nome);
			printf("CPF:%s\n", clientes[i].cpf);
			printf("numero do celular:%s\n", clientes[i].telefone);
			printf("Endereco:%s\n", clientes[i].endereco);
	}
}

void Menu(){
	int opcao;
	do{
	
	printf("======== Bem vindo ao sistema de gerenciamento e cadastro de clientes========\n");
	printf("Digite 1, caso queira cadastrar um cliente\n");
	printf("Digite 2, caso queira listar todos os clientes\n");
	printf("Digite 3, caso sair do sistema\n");
	printf("Escolha uma opcao:\n");
	scanf("%i", &opcao);
	getchar();
	
	switch(opcao)
	{
	case 1:
		CadastrarClientes();
		break;
	case 2:
		ListarClientes();
		break;
	case 3:
		printf("saindo...");
		break;
	default: 
		printf("tente novamente!\n");
	}
}while(opcao != 3);
}
       
 

int main(){
	Menu();
}