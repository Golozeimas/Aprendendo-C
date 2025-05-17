#include <stdio.h>

int main() {
    int matriz[3][3];

	int i, j;
    // Solicita ao usuário os elementos da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
        	printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
	
	
	printf("\nMatriz resultante após adição de 2 a cada elemento:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", matriz[i][j] + 2);
        }
        printf("\n");
    }

    return 0;
}