#include <stdio.h>
#include <stdlib.h>

int main() {
    int *id_array = NULL;
    int *temp_array = NULL;
    int count = 0;
    int new_count = 0;

    printf("Enter number of memory blocks to create: ");
    if (scanf("%d", &count) != 1 || count <= 0) {
        printf("Invalid input! Must be a positive integer.\n");
        return 1;
    }

    id_array = (int *) malloc(count * sizeof(int));
    if (id_array == NULL) {
        printf("Error: Insufficient memory available on your device!\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &id_array[i]);
    }

    printf("\nEntered elements are:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", id_array[i]);
    }
    printf("\n");

    while (1) {
        printf("\nIf you need more memory blocks, enter new total size: ");
        scanf("%d", &new_count);
        
        if (new_count > count) {
            break;
        }
        printf("Try again! Number must be greater than current size (%d).\n", count);
    }

    temp_array = (int *) realloc(id_array, new_count * sizeof(int));
    if (temp_array == NULL) {
        free(id_array);
        printf("Error: Failed to reallocate memory! Insufficient storage.\n");
        return 1;
    }
    id_array = temp_array;

    for (int i = count; i < new_count; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &id_array[i]);
    }
    count = new_count;

    printf("\033c");
    printf("All updated elements in memory:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", id_array[i]);
    }
    printf("\n");

    free(id_array);

    return 0;
}
