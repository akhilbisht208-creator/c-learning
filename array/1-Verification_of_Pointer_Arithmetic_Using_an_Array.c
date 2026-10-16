//Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to
//the third element where ptr is a pointer pointing to the first element of the array.

#include <stdio.h>

int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=array;
    
    //ptr + 2 gives the address of the third element, 
    //which is equal to &array[2], so the condition is true.
    if(ptr+2==&array[2]){
        printf("ptr + 2 points to the third element.\n");
        printf("Value of third element is %d",*(ptr+2));
    }

    return 0;
}