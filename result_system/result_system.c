#include <stdio.h>

float percentage_fun(float full_marks);

float percentage_fun(float full_marks) {
    return (full_marks * 100) / 700;
}

int main() {
    float marks[7], full_marks = 0, par;
    int number_of_subject_fal = 0;
    char s_name[25];

    printf("Enter full name: ");
    fgets(s_name, sizeof(s_name), stdin);
    printf("Enter all subject marks \n");

    for (int i = 0; i < 7; i++) {
        printf("Enter %d subject marks: ", i);
        scanf("%f", &marks[i]);
    }

    printf("\n \n");

    for (int i = 0; i < 7; i++) {
        printf("%d subject marks: %.2f \n", i, marks[i]);
        full_marks = full_marks + marks[i];
        if (marks[i] <= 25) {
            number_of_subject_fal++;
        }
    }

    par = percentage_fun(full_marks);

    if (number_of_subject_fal != 0) {
        printf("Hello %s, you failed with %.2f percentage because %d subject(s) failed \nTry again\n", s_name, par, number_of_subject_fal);
    }
    else if (par < 25) {
        printf("Hello %s you failed with %.2f percentage \nTry again \n", s_name, par);
    }
    else {
        printf("Hello %s, you passed with %.2f percentage\n", s_name, par);
    }

    printf("%s", s_name);
    return 0;
}
