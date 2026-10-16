#include <stdio.h>

int main(){

    int marks[90]; // we can go till [89]

    marks[0]=32;
    marks[1]=54;
    marks[2]=12;

    printf("marks[0] is %d,marks[1] is %d",marks[0],marks[1]);
    return 0;
}

// array[10]={1,2,3,4,5,6,7,8,9,10};    
//ptr + 2 → address of the third element.
//*(ptr + 2) → value stored at that address, which is 3.
