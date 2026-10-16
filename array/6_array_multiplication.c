//Create an array of size 3 × 10 containing multiplication tables for user input .


#include <stdio.h>

int main() {
    int arr[3][10];
    int mul[3];

    // Take input from the user
    printf("Enter three numbers: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &mul[i]);
    }

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
