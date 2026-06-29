/* Program to perform matrix addition */
#include <stdio.h>

int main() {
    int row_num, col_num;
    
    printf("Enter number of rows: ");
    scanf("%d", &row_num);
    printf("Enter number of columns: ");
    scanf("%d", &col_num);

    int fast[row_num][col_num], second[row_num][col_num], result[row_num][col_num];

    printf("\033c");
    printf("Enter First Table \n \n \n");
    for (int i = 0; i < row_num; i++) {
        for (int ier_i = 0; ier_i < col_num; ier_i++) {
            printf("Enter row %d col %d: ", (i + 1), (ier_i + 1));
            scanf("%d", &fast[i][ier_i]);
        }
    }
    
    printf("\033c");
    printf("Enter Second Table \n \n \n");
    for (int i = 0; i < row_num; i++) {
        for (int ier_i = 0; ier_i < col_num; ier_i++) {
            printf("Enter row %d col %d: ", (i + 1), (ier_i + 1));
            scanf("%d", &second[i][ier_i]);
        }
    }

    for (int i = 0; i < row_num; i++) {
        for (int ier_i = 0; ier_i < col_num; ier_i++) {
            result[i][ier_i] = fast[i][ier_i] + second[i][ier_i];
        }
    }
    
    printf("\033c");
    printf("Result: \n");
    for (int i = 0; i < row_num; i++) {
        printf("| ");
        for (int ier_i = 0; ier_i < col_num; ier_i++) {
            printf("%d | ", result[i][ier_i]);
        }
        printf("\n");
    }

    return 0;
}
