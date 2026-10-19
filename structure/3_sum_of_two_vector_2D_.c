//Write a function sumVector which returns the sum of two vectors passed to it. 
//The vectors must be two-dimensional.

#include <stdio.h>
struct vector{
    int i,j;

};
struct vector sumVector(struct vector v1,struct vector v2){
    struct vector v3={v1.i+v2.i,v1.j+v2.j};
    return v3;


}
int main(){
    struct vector v1={1,4};
    struct vector v2={3,7};
    struct vector v3=sumVector(v1,v2);
    printf("Sum of both vector is %di + %dj ",v3.i,v3.j);
    return 0;
}