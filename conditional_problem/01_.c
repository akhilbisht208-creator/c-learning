// WAP to check if a student passed or failed. 
// marks>33 is PASS 
// marks<=33 is FAIL

include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);
    if(marks<33 && marks>=0){
        printf("FAIL");
}
    else if(marks>=33 && marks<=100){
        printf("PASS");

    }
    else{
        printf("Wrong marks "); 
    }

    return 0;
}