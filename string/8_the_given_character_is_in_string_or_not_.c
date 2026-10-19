//Write a program to check whether a given character is present in a string or not.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello Brother";
    char c = 'B';
    int found = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower((unsigned char)str[i]) == tolower((unsigned char)c)) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Yes, the given character is present in the string");
    } else {
        printf("No, the given character is not present in the string");
    }

    return 0;
}
