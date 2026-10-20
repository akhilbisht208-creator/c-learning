//Write a program to read three integers from a file.
#include <stdio.h>
int main(){
    int num;
    FILE *ptr;
    ptr=fopen("akhil.txt","r");
    fscanf(ptr,"%d",&num);
    printf("The value of num is %d\n",num);
    fscanf(ptr,"%d",&num);
    printf("The value of num is %d\n",num);
    fscanf(ptr,"%d",&num);
    printf("The value of num is %d\n",num);

    fclose(ptr);

    return 0;
}