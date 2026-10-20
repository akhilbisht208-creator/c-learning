//Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *ptr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Enter value of ptr[%d]: ", i);
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 10 * sizeof(int));
    n = 10;

    printf("\nEnter 5 more integers:\n");

    for (int i = 5; i < n; i++) {
        printf("Enter value of ptr[%d]: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\nExpanded array:\n");

    for (int i = 0; i < n; i++) {
        printf("Value of ptr[%d]: %d\n", i, ptr[i]);
    }

    printf("Memory expanded to store 10 integers.\n");

    free(ptr);
    return 0;
}
