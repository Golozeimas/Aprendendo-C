#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

FILE *ArqAluno;
int opMenuPrincipal, opMenuCadastro, opMenuImpressao,i;
char nome[80], disciplina[50];
char usuario[20], senha[20], usuarioAdm[20], senhaAdm[20];
void BarraProgressao(){ 
    system("color A");
    printf("+===================================================================================================+\n");
	printf("|A   G   U   A   R    D    E       O         S  I   S  T   E   M   A      C  A  R  R  E  G   A   R !|\n");
    printf("+===================================================================================================+\n");
      printf("\n");
/*	for (i=1;i<=100;i++){
     printf("\â–ˆ"); //\xDB
	  Sleep(100);		
	}*/
	
 	int j;int espacosAntes = 50;
    for (j = 1; j <= 100; j++) {
        printf("\r%*d %%", espacosAntes, j);
        fflush(stdout); 
        Sleep(100); 
    } 
	 printf("\n");
	 system("cls");
}
 
void CriarArquivo(){
	ArqAluno = fopen("C://temp//CadAluno.txt","w+");
	if(ArqAluno==NULL){
		printf("Erro ao criar o Arquivo\n");
	}else{
		printf("Arquivo criado com sucesso\n");
	}
}
 
int verificarLogin(char *usuario, char *senha) {
    if (strcmp(usuario, usuarioAdm) == 0 && strcmp(senha, senhaAdm) == 0) {
        return 1;  
    } else {
        return 0;  
    }
}
void GravandoDadosAluno(){
	fprintf(ArqAluno,"|==================================|\n");
	fprintf(ArqAluno,"|         DADOS DO ALUNO           |\n");
	fprintf(ArqAluno,"|----------------------------------|\n");
	fprintf(ArqAluno,"|Nome.........:%s|\n",nome);
	fprintf(ArqAluno,"|Disciplina...:%s|\n",disciplina);
	fprintf(ArqAluno,"|==================================|\n");
	fprintf(ArqAluno,"|         Curso: Eng. Software     |\n");
	fprintf(ArqAluno,"|----------------------------------|\n");

}
void ImprimirDadosAluno(){
	printf("|==================================|\n");
	printf("|         DADOS DO ALUNO           |\n");
	printf("|----------------------------------|\n");
	printf("|Nome.........:%s|\n",nome);
	printf("|Disciplina...:%s|\n",disciplina);
	printf("|==================================|\n");
	printf("|         Curso: Eng. Software     |\n");
	printf("|----------------------------------|\n");
}
void CadastroAluno(){
	CriarArquivo();
	printf("Digite seu nome completo\n");
	scanf(" %[^\n]", nome);
	printf("Informe a disciplina\n");
	scanf(" %[^\n]", disciplina);
	GravandoDadosAluno();
	printf("Dados gravados com sucesso. Confira o arquivo ArqAluno.txt\n");
	fclose(ArqAluno);
	ImprimirDadosAluno();
}
void MenuPrincipal(){
	printf("+===================================+\n");
	printf("|       TEMPLATE DA APLICAÇÃO       |\n");
	printf("|-----------------------------------|\n");
	printf("|     1- ACAO1    | 2-ACAO2         |\n");
	printf("|-----------------------------------|\n");
	printf("|     3- ACAO3    | 4-ACAO4         |\n");
	printf("|-----------------------------------|\n");
	printf("|Selecione a opção ou 5 para Sair   |\n");
	printf("+===================================+\n");
    scanf("%i",&opMenuPrincipal);
}

void Login(){
    printf("+=================================+\n");
    printf("|             Login               |\n");
    printf("|    Digite o nome de usuario     |\n");
    printf("|---------------------------------|\n");
    scanf(" %[^\n]", usuario); // esse scanf, deixa usar espaços, e é necessario 
					          //  dar espaço antes do começo da string, para limpar o buffer
    printf("+=================================+\n");
    printf("|             Login               |\n");
    printf("|         Digite a senha          |\n");
    printf("|---------------------------------|\n");
    printf("+=================================+\n");
	scanf(" %[^\n]", senha);    
     
    if (verificarLogin(usuario, senha)) {
        printf("Login bem-sucedido!\n");
        system("cls");
        MenuPrincipal();
    } else {
        printf("Nome de usuario ou senha incorretos.\n");
    }
	printf("\n");
	printf("\n");				
}
void cadastroAdm(){
	BarraProgressao();
	printf("+=================================+\n");
    printf("|           Cadastro              |\n");
    printf("|    Digite o nome do usuario     |\n");
    printf("|---------------------------------|\n");
    scanf(" %[^\n]", usuarioAdm);
    
	printf("+=================================+\n");
    printf("|           Cadastro              |\n");
    printf("|    Digite a senha do usuario    |\n");
    printf("|---------------------------------|\n");
    scanf(" %[^\n]", senhaAdm);
    
    Login();
	
}
void MenuCadastro(){
	do{
	printf("+=================================+\n");
    printf("|       MENU CADASTRO             |\n");
	printf("|---------------------------------|\n");
	printf("|   1-ALUNO     | 2-CADASTRO2     |\n");
	printf("|---------------------------------|\n");
	printf("|   3-CADASTRO3 | 4-CADASTRO4     |\n");
	printf("|---------------------------------|\n");
	printf("|Selecione uma opção ou 5 P/Voltar|\n"); 
	printf("+=================================+\n");
    scanf("%i",&opMenuCadastro);
    switch(opMenuCadastro){
	case 1:{ // 1- Casdastro 1
		system("cls");
		CadastroAluno();
		break;
	}
	case 2:{// 2- Casdastro 2
		break;
		}
	case 3:{// 3- Casdastro 3
		break;
	}		
	case 4:{// 4- Casdastro 4
		break;
	}
	default:
		break;
	}
	}while(opMenuCadastro!=5);
	MenuPrincipal();
}
void MenuImpressao(){
    printf("+=================================+\n");
    printf("|           MENU IMPRESSAO        |\n");
	printf("|---------------------------------|\n");
	printf("|   1-ALUNO     | 2-CADASTRO2     |\n");
	printf("|---------------------------------|\n");
	printf("|   3-CADASTRO3 | 4-CADASTRO4     |\n");
	printf("|---------------------------------|\n");
	printf("|Selecione uma opção ou 5 P/Voltar|\n"); 
	printf("+=================================+\n");
	scanf("%i",&opMenuImpressao);
	switch(opMenuImpressao){
	case 1:{
		system("cls");
		ImprimirDadosAluno();
		break;
	}	
	default:
		break;
	}
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	cadastroAdm();
	do{ 
	switch(opMenuPrincipal){
	case 1:{  // 1-OPCAO 1
		system("cls");
		MenuCadastro();
		break;
	}
	case 2:{ //2-OPCAO 2
		system("cls");
		MenuImpressao();
		break;
	}
	case 3:{ //3-OPCAO 3
		break;
	}
	case 4:{ //4-OPCAO 4
		break;
	}
	default:
		break;
	}
	}while(opMenuPrincipal!=5);
}