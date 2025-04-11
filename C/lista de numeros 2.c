#include <stdio.h>
 
int main() {
	int I;
	
	
    int J, i;
    J = 8;
    I = 1;
    for(i = 1; i <16 ; i++){
			printf("I=%i J=%i\n", I, --J);
		if (i == 3){
			I += 2;
			J = 8;
		}
		if (i == 6){
			I += 2;
			J = 8;
		}
		if (i == 9){
			I += 2;
			J = 8;
		}
		if (i == 12){
			I += 2;
			J = 8;
		}	
	}
    return 0;
}