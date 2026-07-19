#include <stdio.h>
#include <math.h>
int main() {

    int num, power, res;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("enter a power: ");
    scanf("%d", &power);
    res = round(pow(num, power));
    printf("%d power is %d",num, res);

          return 0;
}
