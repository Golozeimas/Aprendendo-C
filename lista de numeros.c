#include <stdio.h>
 
int main() {
    int I,J;
    J = 60;
    I = 1;
    printf("I=%i J=%i\n", I, J);
    while ( J != 0){
    	
        I += 3;
        J -= 5;
        
        printf("I=%i J=%i\n", I, J);
    }
 
    return 0;
}