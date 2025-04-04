#include <stdio.h>
#include <stdlib.h>




int main(){
	int M,N;
	int S = 0;
	do {
		scanf("%i %i", &M, &N);
		if (M > N){
		for(N ; N <= M;N += 1){
			printf("%i ", N);
			S += N;
			if (N == M){
				printf("Sum:%i\n", S);
				S = 0;
			}
		}
		getchar();
		}
		else if(N > M){
			for(M ; N >= M;M += 1){
				printf("%i ", M);
				S += M;
				if (N == M){
					printf("Sum:%i\n", S);
					S = 0;
				}
			}
		}
	}
	while(M > 0 && N > 0);
	
	return 0;
}