//print 1(true) or 0(false) for the following statement:
// a. if it's sunday and it's raining -> true 

#include<stdio.h>

int main()
{
    int isSunday=1;
    int isSnowing=1;
    printf("%d", isSunday && isSnowing);
    return 0;
}
// b. if it's monday or it's raining -> true 

#include<stdio.h>

int main()
{
    int isMonday=0;
    int isRaining=1;
    printf("%d", isMonday || isRaining);
    return 0;
}

// c. if a number is greater than 9 and less than 100 -> true (2 digit number)


#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("%d", n>9 && n<100);
    
    return 0;
}