#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,j,c;
	
	printf("Digite a ordem da matriz:\n");
	
	scanf("%i", &n);
	
	
	int matriz[n][n];
	
	for(i = 0; i<n; i++){
		for(j = 0; j<n; j++){
			matriz[i][j] = i + j;
		}
		printf("\n");
	}
	
	for(i = 0; i<n; i++){
		for(j = 0; j<n; j++){
			printf("%2i", matriz[i][j]);
		}
		printf("\n");
	}
}