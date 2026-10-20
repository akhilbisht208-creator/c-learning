//Create an array of multiplication table of 7 up to 10 (7 × 10 = 70). 
//Use realloc so that it can store the multiplication table up to 15 (7 × 15 = 105).
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n=7;
    int *ptr;
    ptr=(int*)malloc(n * sizeof(int));
    for (int i=1;i<=10;i++){
        
        printf("%d X %d = %d\n",n,i,i*n);
    }
    printf("Now Expanded Table ");
    ptr=realloc(ptr,15);
    for (int i=1;i<=15;i++){
        
        printf("%d X %d = %d\n",n,i,i*n);
    }


}