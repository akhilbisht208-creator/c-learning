//Write a program to determine whether a character entered by the user is lowercase or not.

#include<stdio.h>
#include <ctype.h>
int main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if(islower(ch)){
        printf("Yes the character entered by the user is lowercase");
    }
    else{
        printf("No the character entered by the user is not lowercase");
    }

    return 0;
}