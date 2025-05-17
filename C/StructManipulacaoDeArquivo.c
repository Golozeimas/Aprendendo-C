 #include <stdio.h>
 #include <stdlib.h>
 
  struct Pessoa
  {
	  char nome[20];
	  int idade;
  };
  
  int main()
  {
  	int i = 0;
		  
	  do{
		  struct Pessoa p;
		  
		  printf("Digite seu nome\n");
		  scanf("%s", p.nome);
		  
		  printf("Digite sua idade\n");
		  scanf("%i", &p.idade);
		  
		  FILE *usuarios;
		  
		  usuarios = fopen("usuarios.txt", "a");
		  
		  fprintf(usuarios,"nome:%s idade%d\n", p.nome, p.idade);
		  
		  i++;
		  
		  fclose(usuarios);
	  } while( i != 3);
  }