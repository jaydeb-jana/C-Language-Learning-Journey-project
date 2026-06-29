/* Program to calculate the factorial of a number repeatedly */
#include <stdio.h>

int main() {
    while (1) {
        int num, res = 1;
        
        printf("Enter number: ");
        scanf("%d", &num);

        for (int i = 1; i <= num; i++) {
            res = res * i;
        }
        
        printf("\033c");
        printf("Result is: %d \n \n \n", res);
    }
    
    return 0;
}
