//Write a program to dynamically create an array of size 6 capable of storing 6 integers by calloc() function and store 6 integers entered by the user.


#include <stdio.h>
#include <stdlib.h>

int main(){
    int n=6;
    int *ptr;
    ptr=(int *) calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Enter the value of ptr[%d] : ",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("Value of ptr[%d] : %d\n",i,ptr[i]);
    }
    return 0;
}