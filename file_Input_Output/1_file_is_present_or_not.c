//Modify the program above to check whether the file exists or not before opening the file.

#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("akhil.txt", "r");

    if (ptr == NULL) {
        printf("SORRY! File does not exist.");
    }
    else {
        int num;
        printf("Yes, the file exists!\n");

        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);

        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);

        fclose(ptr);
    }

    return 0;
}
