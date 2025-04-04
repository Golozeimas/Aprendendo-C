#include <stdio.h>
 
int main(){
    int X, i;
    scanf("%i", &X);
    for (i = 1; i< X ;i += 2){
    printf("%i\n", i);
}
    return 0;
}