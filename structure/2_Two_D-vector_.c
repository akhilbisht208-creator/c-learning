//Create a two-dimensional vector using structures in C.
#include <stdio.h>
struct vector{
    int x,y;

};
int main(){
    struct vector v;
    scanf("%d %d",&v.x,&v.y);
    printf("%di+%dj",v.x,v.y);
    return 0;
}