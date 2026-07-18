#include <stdio.h>

int main() {
    int num, temp_num, sum = 0, remainder;

    printf("enter a number: ");
    scanf("%d", &num);

    temp_num = num;

    while (temp_num != 0) {
        remainder = temp_num % 10;
        sum += remainder;
        temp_num = temp_num / 10;
    }

    printf("%d\n", sum);

    return 0;
}
