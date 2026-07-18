#include <stdio.h>
int main() {
    char x[] = "Hello I am jaydeb huu haa haa 🤣🤣 haaa!";
    int length;
    for(length = 0; x[length] != '\0'; length++) {}
    printf("%d", length);

    return 0;
}
