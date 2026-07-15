#include <stdio.h>
#include <math.h>

int main() {
    int num, dg, temp_num, res = 0;
    printf("enter a number: ");
    scanf("%d", &num);
    temp_num = num;
    dg = log10(num) + 1;
   
    for(int i = 0; i < dg; i++) {
        res += (temp_num % 10) * pow(10, dg - i - 1);
        temp_num = (temp_num / 10);
    }
    
    printf("%d", res);
    
    return 0;
}
