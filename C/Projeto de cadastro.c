#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int opMenu, opCadastroDeClientes, opCadastroDeProdutos, opCadastro, oplistaDeClientes;

char nome[100], cpf[14], celular[11], produto[60];



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
			listaDeClientes();
			break;
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
		printf("       insira de novo um numero valido      \n");
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
		CadastroC();
		break;
	}
	case 2:{
		CadastroC();
		break;
	}
	case 3:{
		CadastroC();
		break;
	}
	case 4:{
		CadastroC();
		break;
	}
	case 5:{
		Menu();
		break;
	}default:{
		system("cls");
		printf("       insira de novo um numero valido      \n");
		CadastroDeClientes();
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

void listaDeClientes(){
	
	system("cls");
	printf("cliente:%s\n", nome);
	printf("cpf:%s\n", cpf);
	printf("celular:%s\n", celular);
	printf("produto:%s\n", produto);
	
	printf("Lista Atualizada\n");
	system("pause");
	system("cls");
	Menu();
}

void CadastroC(){
	system("cls");
	getchar();	
	printf("nome do cliente:\n");
	fgets(nome, sizeof(nome), stdin);
	printf("CPF do cliente:\n");
	fgets(cpf, sizeof(cpf), stdin);
	printf("numero do celular:\n");
	fgets(celular, sizeof(celular), stdin);
	printf("produto que comprou:\n");
	fgets(produto, sizeof(produto), stdin);
	
	system("cls");
	Menu();
	}
int main(){
	Menu();
}