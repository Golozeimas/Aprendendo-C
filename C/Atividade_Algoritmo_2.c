#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int i,op, j, valor;

int matriz[3][5];

float valorDe1Quillowatt, valorde100Quillowatts,valorDaEnergia, valorDescontado, Desconto; // vari�veis da 1 quest�o

int salarioMinimo,quillowattsGastos; // vari�veis da 1 quest�o

int numeroInteiro, invertido; // vari�veis da 2 quest�o

int quantidade; // vari�veis da 3 quest�o

float preco; // vari�veis da 3 quest�o

char sexo; // vari�veis da 4 quest�o

float h, pesoideal; // vari�veis da 4 quest�o

float saldoMedio, credito; // vari�veis da 5 quest�o

int opcao; // vari�veis da 6 quest�o
int num1, num2; // vari�veis da 6 quest�o
int resultado; // vari�veis da 6 quest�o
float resultadoDiv; // vari�veis da 6 quest�o

int idadeAnos; // vari�veis da 7 quest�o
int idadeDias; // vari�veis da 7 quest�o

char clima[20]; // vari�vel da 8 quest�o


int numeroAleatorio; // vari�veis da 9 quest�o

int i; // vari�veis da 9 quest�o

int numero; // vari�vel da 10 quest�o

int matriz2[3][3]; // vari�veis da 11 quest�o
int i, j; // vari�veis da 11 quest�o

int A[3][3], B[3][3], C[3][3]; // vari�veis da 12 quest�o
int i, j, k; // vari�veis da 12 quest�o

int A1[2][2], B1[2][2], C1[2][2]; // vari�veis da 13 quest�o
int i, j; // vari�veis da 13 quest�o

int matriz3[3][3]; // vari�veis da 14 quest�o
int i, j, soma = 0; // vari�veis da 14 quest�o

float divisor; // vari�vel da 15 quest�o


    
void montandoMenuComMatriz()
{
	valor = 1;
	 for(i = 0 ; i < 3; i++){
		 for(j = 0; j<5; j++){
			 matriz[i][j] = valor++; // faz o valor a aumentar da quest�o automaticamente
		 }
	 }
	 printf("|===========================|\n");
	 printf("|     MENU DE QUESTOES      |\n");
     printf("|    aperte 0 para sair     |\n");
     printf("|===========================|\n");
	 for(i =0; i < 3; i++){
		 for(j = 0; j < 5; j++){
		 	 printf("|%4i", matriz[i][j]); // d� um espa�o de 4 barras e vai repetir 15 vezes
		 	 printf("   |%4\n"); // vai repetir 15 vezes
		 }
	 }
	 
}
void Questao001(){
	
	system("cls");
	
	valorde100Quillowatts = 1518/7;
	
	valorDe1Quillowatt = valorde100Quillowatts/100;
	
	salarioMinimo = 1518;
	
	printf("Salario Minimo atual:%2i\n", salarioMinimo);
	
	printf("Digite quantos Quillowatts Gastos na residencia:\n");
	
	scanf("%i", &quillowattsGastos);
	
	printf("==============================\n");
	
	printf("Valor de cada Quillowatt:\n");
	
	printf("%.2f\n", valorDe1Quillowatt);
	
	valorDaEnergia = quillowattsGastos * valorDe1Quillowatt;
	
	printf("Valor da conta de energia:\n");
	
	printf("%.2fR$\n", valorDaEnergia);
	
	printf("Valor da conta de energia apos 10 por cento de desconto:\n");
	
	Desconto = 0.1 * valorDaEnergia;
	
	valorDescontado = valorDaEnergia - Desconto;
	
	printf("%.2fR$\n", valorDescontado);
	
	system("pause");
}

void Questao002(){
	system("cls");
	invertido = 0;
	
	printf("Digite numero com (CDU):\n");
	scanf("%d", &numeroInteiro);
	
	while(numeroInteiro != 0)
	{
		int digito = numeroInteiro % 10; // conta para descobrir o d�gito
		
		invertido = invertido * 10 + digito; // adiciona o d�gito invertido
		
		numeroInteiro = numeroInteiro/10; // remove o ultimo d�gito
	}	
	
	printf("Numero no padrao (UDC):\n%i", invertido);
	
	printf("\n");
	
	system("pause");
	
}

void Questao003(){
	system("cls");
	while(op != 0)
	{
	printf("===== Lanchonete - Lachebem =====\n");
	printf("  Especificacao | Codigo |  Preco\n");
	printf("Cachorro Quente |  100   |   4,20\n");
	printf("Bauru Simples   |  101   |   3,30\n");
	printf("Bauru Com Ovo   |  102   |   5,50\n");
	printf("Hamburger       |  103   |   6,20\n");
	printf("Cheeseburguer   |  104   |   5,30\n");
	printf("Refrigerante    |  105   |   4,50\n");
	printf("=================================\n");
	printf("indique qual lanche, voce ira querer com o CODIGO ou 0 para sair:\n");
    scanf("%i", &op);
    if(op != 0){
 	printf("Qual a Quantidade desejada:\n");
	scanf("%i", &quantidade);
	} else if(op == 0)
	{
		break;
	}
	switch(op)
	{
	case 100:
		preco = 4.20 * quantidade;
		printf("Valor a se pago pelo pedido:\n");
		printf("%.2fR$\n", preco);
		system("pause");
		system("cls");
		break;
	case 101:
		preco = 3.30 * quantidade;
		printf("Valor a se pago pelo pedido:\n");
		printf("%.2fR$\n", preco);
		system("pause");
		system("cls");
		break;
	case 102:
		preco = 5.50 * quantidade;
		printf("Valor a se pago pelo pedido:\n");
		printf("%.2fR$\n", preco);
		system("pause");
		system("cls");
		break;
	case 103:
		preco = 6.20 * quantidade;
		printf("Valor a se pago pelo pedido:\n");
		printf("%.2fR$\n", preco);
		system("pause");
		system("cls");
		break;
	case 104:
		preco = 5.30 * quantidade;
		printf("Valor a se pago pelo pedido:\n");
		printf("%.2fR$\n", preco);
		system("pause");
		system("cls");
		break;
	case 105:
		preco = 4.50 * quantidade;
		printf("Valor a se pago pelo pedido:\n");
		printf("%.2fR$\n", preco);
		system("pause");
		system("cls");
		break;
	default:
		break;
	}
	}
	system("pause");
	main();
}

void Questao004(){
	do{
	system("cls");
	printf("====== Calculadora de peso Ideal ======\n");
	printf("Digite 'M' (masculino) ou 'F' (feminino):\n");
	scanf("%s", &sexo);
	
	if (sexo == 'M' || sexo == 'm'){
		printf("Digite sua altura:\n");
		scanf("%f", &h);
		pesoideal = (72.7*h) - 58;
		printf("peso ideal:\n");
		printf("%.2f\n", pesoideal);
		system("pause");
		printf("Quer sair aperte 0 ou qualquer caso nao queira:\n");
		scanf("%i", &op);
	}
	else if(sexo == 'F' || sexo == 'f')
	{
		printf("Digite sua altura:\n");
		scanf("%f", &h);
		pesoideal = (62.1*h) - 44.7;
		printf("peso ideal:\n");
		printf("%.2f\n", pesoideal);
		system("pause");
		printf("Quer sair aperte 0 ou qualquer caso nao queira:\n");
		scanf("%i", &op);
	}
	}while (op != 0);
	
	main();
}

void Questao005(){

    system("cls");
    printf("Digite o saldo m�dio do cliente: ");
    scanf("%f", &saldoMedio);

    if (saldoMedio <= 200) {
        credito = 0;
    } else if (saldoMedio <= 400) {
        credito = saldoMedio * 0.20;
    } else if (saldoMedio <= 600) {
        credito = saldoMedio * 0.30;
    } else {
        credito = saldoMedio * 0.40;
    }


    printf("Saldo m�dio: R$ %.2f\n", saldoMedio);
    printf("Cr�dito especial: R$ %.2f\n", credito);

    return 0;
}

void Questao006(){
   
    system("cls");

    do {
        printf("\n--- CALCULADORA SIMPLES ---\n");
        printf("1 - SOMAR\n");
        printf("2 - SUBTRAIR\n");
        printf("3 - MULTIPLICAR\n");
        printf("4 - DIVIDIR\n");
        printf("5 - FINALIZAR OPERA��O\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

       
        if (opcao == 5) {
            printf("Opera��o finalizada.\n");
            break;
        }

       
        printf("Digite o primeiro n�mero: ");
        scanf("%d", &num1);
        printf("Digite o segundo n�mero: ");
        scanf("%d", &num2);

       
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado da soma: %d\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado da subtra��o: %d\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado da multiplica��o: %d\n", resultado);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Erro: divis�o por zero n�o � permitida.\n");
                } else {
                    resultadoDiv = (float)num1 / num2;
                    printf("Resultado da divis�o: %.2f\n", resultadoDiv);
                }
                break;
            default:
                printf("Op��o inv�lida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}

void Questao007(){
	
   

    
    printf("Digite sua idade (em anos): ");
    scanf("%d", &idadeAnos);

    
    idadeDias = idadeAnos * 365;

    
    printf("Sua idade em dias: %d\n", idadeDias);

    if (idadeDias < 6570) {
        printf("Voc� � menor de idade.\n");
    } else {
        printf("Voc� � maior de idade.\n");
    }

    return 0;

}

void Questao008(){
	 

    
    printf("Digite o clima do dia (nublado, ensolarado ou chuvoso): ");
    scanf("%s", clima);

    
    if (strcmp(clima, "nublado") == 0) {
        printf("Temperatura agrad�vel.\n");
    } else if (strcmp(clima, "ensolarado") == 0) {
        printf("Temperatura quente.\n");
    } else if (strcmp(clima, "chuvoso") == 0) {
        printf("Temperatura fria.\n");
    } else {
        printf("Clima inv�lido. Tente: nublado, ensolarado ou chuvoso.\n");
    }

    return 0;
}

void Questao009(){
	
	
	
	printf("numero:\n");
	scanf("%i", &numeroAleatorio);
	
	printf("numero antecessor:%i\n", numeroAleatorio - 1);
	printf("numero sucessor:%i\n", numeroAleatorio + 1);
		
	system("pause");


}

void Questao010(){

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    
    if (numero % 2 == 0) {
        printf("� m�ltiplo de 2.\n");
    }
    if (numero % 3 == 0) {
        printf("� m�ltiplo de 3.\n");
    }
    if (numero % 5 == 0) {
        printf("� m�ltiplo de 5.\n");
    }
    if (numero % 2 != 0 && numero % 3 != 0 && numero % 5 != 0) {
        printf("N�o � m�ltiplo de 2, 3 ou 5.\n");
    }

    return 0;
}

void Questao011(){
	


    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("\nMatriz multiplicada por 2:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", matriz2[i][j] * 2);
        }
        printf("\n");
    }

    return 0;

}

void Questao012(){
	 

    
    printf("Digite os elementos da matriz A (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

  
    printf("\nDigite os elementos da matriz B (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = 0;
        }
    }

   
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

   
    printf("\nMatriz resultado C = A * B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void Questao013(){


    
    printf("Digite os elementos da matriz A (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("Digite os elementos da matriz B (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

   
    printf("Matriz soma (C = A + B):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
void Questao014(){
	 
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
            if (i == j) {
                soma += matriz[i][j];
            }
        }
    }

    printf("Soma da diagonal principal: %d\n", soma);

    return 0;
}
void Questao015(){

    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o n�mero para dividir os elementos: ");
    scanf("%f", &divisor);

    if (divisor == 0) {
        printf("Erro: divis�o por zero n�o � permitida.\n");
    } else {
        printf("Matriz dividida por %.2f:\n", divisor);
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%6.2f", matriz[i][j] / divisor);
            }
            printf("\n");
        }
    }

    return 0;
}

	
int main()
{
	setlocale(LC_ALL, "pt-br");
	do{
	system("cls");
	montandoMenuComMatriz();
	
	printf("Digite a questao que voce quer acessar:\n");
	
	scanf("%i", &op);	
	switch(op)
	{
	case 1:
		Questao001();
		break;
	case 2:
		Questao002();
		break;
	case 3:
		Questao003();
		break;
	case 4:
		Questao004();
		break;
	case 5:
		Questao005();
		break;
	case 6:
		Questao006();
		break;
	case 7:
		Questao007();
		break;
	case 8:
		Questao008();
		break;
	case 9:
		Questao009();
		break;
	case 10:
		Questao010();
		break;
	case 11:
		Questao011();
		break;
	case 12:
		Questao012();
		break;
	case 13:
		Questao013();
		break;
	case 14:
		Questao014();
		break;
	case 15:
		Questao015();
		break;
	default:
		break;
	}
	}while(op != 0);
	return 0;
}