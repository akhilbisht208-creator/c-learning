//Write a program to read a text file character by character and 
//write its content twice in separate files

#include <stdio.h>
int main(){
    FILE *ptr;
    FILE *ptr2;
    ptr=fopen("akhil.txt","r");
    ptr2=fopen("akhil1.txt","a");
    while(1){
        char ch = fgetc(ptr);
        if (ch == EOF)
{
        break;
}
    else{
        fprintf(ptr2,"%c",ch);
        fprintf(ptr2,"%c",ch);
        printf("%c",ch);
    }
}

    return 0;
}