#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int str_len, temp_checker = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    str_len = strlen(str);
    temp_checker = str_len / 2;
    for(int i = 0; i < str_len / 2; i++) {
        if(str[str_len -1 - i] == str[i]) {
            temp_checker--;
        } else {
            break;
        }
    }

    if(temp_checker == 0) {
        printf("%s Is The Palindrome String", str);
    } else {
        printf("%s Is not Palindrome String", str);
    }
    return 0;
}
