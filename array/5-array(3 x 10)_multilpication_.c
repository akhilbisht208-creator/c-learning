//Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and 9 respectively.

#include <stdio.h>

int main() {
    int arr[3][10];
    int mul[] = {2, 7, 9};

    // Store the multiplication tables
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    // Print the multiplication tables
    for (int i = 0; i < 3; i++) {
        printf("Multiplication table of %d:\n", mul[i]);

        for (int j = 0; j < 10; j++) {
            printf("%d ", arr[i][j]);
        }

        printf("\n\n");
    }

    return 0;
}
