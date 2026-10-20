//Write a program to generate multiplication table of a given number in text format.
//Make sure that the file is readable and well formatted.
#include <stdio.h>
int main(){
    int n,table;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    FILE *ptr;
    ptr=fopen("akhil.txt","w");
    for(int i=1;i<=10;i++){
        table=n*i;
        fprintf(ptr,"%d * %d = %d\n",n,i,table);
    }

    fclose(ptr);

    return 0;
}