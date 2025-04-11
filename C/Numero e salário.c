#include <stdio.h>
#include <stdlib.h>

int funcNumber, workHour;

float wage;

float wageForHour;

int main() {
    scanf("%i", &funcNumber);
    scanf("%i", &workHour);
    scanf("%f", &wageForHour);
    
    wage = workHour*wageForHour;
    
    printf("NUMBER = %i\n", funcNumber);
    printf("SALARY = U$ %.2f\n", wage);
    
    return 0;
}