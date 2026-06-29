/* Program to calculate the power of a number repeatedly */
#include <stdio.h>

int main() {
    while (1) {
        int number, power, res = 1;
        
        printf("Enter a number: ");
        scanf("%d", &number);
        printf("Enter %d power: ", number);
        scanf("%d", &power);
        
        printf("\033c");
        
        for (int i = 0; i < power; i++) {
            res = res * number;
        }
        
        printf("Result: %d \n\n", res);
    }
    
    return 0;
}
