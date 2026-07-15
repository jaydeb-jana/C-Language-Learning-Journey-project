#include <stdio.h>
#include <math.h>

int main() {
    int num, original_num, remainder, n = 0;
    double result = 0.0;

    printf("enter a number: ");
    scanf("%d", &num);

    original_num = num;

    n = log10(num) + 1;

    original_num = num;

    while (original_num != 0) {
        remainder = original_num % 10;
        result += pow(remainder, n);
        original_num /= 10;
    }

    if ((int)result == num)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
