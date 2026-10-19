//Write a program to count the occurrence of a given character in a string.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "I WANT TO BECOME ONE OF THE RICHEST PERSON IN THE WORLD";
    char c = 'o';
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower((unsigned char)str[i]) == c) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}