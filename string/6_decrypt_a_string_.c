// /Write a program to decrypt the string encrypted using encrypt function in problem 6.

#include <stdio.h>


int main(){
    char str[]="Nz!qspqfsuz!epdvnfout!cfmpx!uif!qjmmpx";
 
    int i=0;
    while(str[i]!='\0') {
        str[i]=str[i]-1;
        i++;
    }
    

    printf("%s",str);

    return 0;
}