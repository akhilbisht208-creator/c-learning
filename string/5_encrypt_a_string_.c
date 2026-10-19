//Write a program to encrypt a string by adding 1 to the ASCII value of its characters.

#include <stdio.h>

int main(){
    char str[]="My property documents below the pillow";
 
    int i=0;
    while(str[i]!='\0') {
        str[i]=str[i]+1;
        i++;
    }
    str[i]='\0'; // Null-terminate the encrypted string

    printf("%s",str);

    return 0;
}