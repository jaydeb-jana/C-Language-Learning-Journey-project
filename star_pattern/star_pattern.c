/* Program to print a star pattern */
#include <stdio.h>

int main() {
    int row; 
    
    printf("Enter number of rows: ");
    scanf("%d", &row);

    for (int i = 1; i <= row; i++) {
        for (int inr_i = 0; inr_i < i; inr_i++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
