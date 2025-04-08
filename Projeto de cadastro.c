#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int opMenu, opCadastroDeClientes, opCadastroDeProdutos;

char nome[100], cpf[14];

int celular[11];


void Menu(){
	printf("       MENU : Escolha um opcao, abaixo      \n");
	printf("|------------------------------------------|\n");
	printf("| 1 - Cadastro                2 - Clientes |\n");
	printf("|------------------------------------------|\n");
	printf("| 3 - Cadastro de Produtos    4 - Produtos |\n");
	printf("|------------------------------------------|\n");
	printf("|                sair 5                    |\n");
	printf("|------------------------------------------|\n");
	printf("opcao:");
	scanf("%i", &opMenu);
	
	switch (opMenu){
		case 1:{
			system("cls");
			CadastroDeClientes();
			break;
		}
		case 2:{
		}
		case 3:{
			system("cls");
			CadastroDeProdutos();
			break;
		}
		case 5:{
			break;
		}
		default:{
			system("cls");
			Menu();
			break;
		}
	}
}

void CadastroDeClientes(){
	printf("          Escolha um opcao, abaixo:         \n");
	printf("|------------------------------------------|\n");
	printf("|  cadastro 1                   cadastro 3 |\n");
	printf("|------------------------------------------|\n");
	printf("|  cadastro 3                   cadastro 4 |\n");
	printf("|------------------------------------------|\n");
	printf("|                sair 5                    |\n");
	printf("opcao:");
	scanf("%i", &opCadastroDeClientes);
	switch(opCadastroDeClientes){
	case 1:{
		Cadastro();
		break;
	}
	case 5:{
		Menu();
		break;
	}
	}	
}
void CadastroDeProdutos(){
	printf("          Escolha um opcao, abaixo:         \n");
	printf("|------------------------------------------|\n");
	printf("|  cadastro 1                   cadastro 3 |\n");
	printf("|------------------------------------------|\n");
	printf("|  cadastro 3                   cadastro 4 |\n");
	printf("|------------------------------------------|\n");
	printf("|                sair 5                    |\n");
	printf("opcao:");
	scanf("%i", &opCadastroDeProdutos);
}

void Cadastro(){
	system("cls");
	getchar();	
	printf("nome do cliente:\n");
	fgets(nome, sizeof(nome), stdin);
	printf("CPF do cliente:\n");
	fgets(cpf, sizeof(cpf), stdin);
	printf("numero do celular:\n");
	fgets(celular, sizeof(celular), stdin);
	
	system("cls");
	Menu();
	}
int main(){
	Menu();
}