//Write a program to take string as an input from the user using %c and %s and confirm that the strings are equal

#include <stdio.h>
#include <string.h>
int main(){
    char str1[4];
    char str2[4];
    printf("Enter a string : ");
    scanf("%3c",str1);
    str1[3] = '\0';
    printf("Enter second string : ");
    scanf("%3s",str2);
    if(strcmp(str1,str2) == 0){
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    return 0;
}