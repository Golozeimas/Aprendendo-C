#include <stdio.h>
#include <stdlib.h>

int x, y;

int main() {
 do{
  scanf("%i", &x);
  scanf("%i", &y);
  
  if(x>y){
	  printf("Decrescente\n");
  }
  else if (x<y){
	  printf("Crescente\n");
  }
 }
 while(x != y);
    return 0;
}