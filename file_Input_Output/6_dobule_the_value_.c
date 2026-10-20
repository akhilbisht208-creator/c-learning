//Write a program to modify a file containing an integer to double its value.

#include <stdio.h>
int main(){
    int num;
    FILE *ptr;
    ptr=fopen("akhil.txt","r");
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    ptr=fopen("akhil.txt","w");
    fprintf(ptr,"The double value of num is %d\n",(num*2));
    fclose(ptr);



    return 0;
}