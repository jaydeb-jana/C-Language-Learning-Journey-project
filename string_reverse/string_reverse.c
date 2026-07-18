#include <stdio.h>
#include <string.h>
int main() {


    char str[100], str_temp;
    int str_len;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str_len = strlen(str);
    for(int i = 0; i < str_len / 2; i++) {
        str_temp = str[str_len -1 - i];
        str[str_len - 1 - i] = str[i];
        str[i] = str_temp;
    }
    printf("reverse string is %s", str);

    return 0;
}
