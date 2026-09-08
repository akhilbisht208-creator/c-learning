//  WAP to write sum of first natural number , and print number in reverse
#include<stdio.h>

int main()
{
    int sum=0;
    int n;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum %d\n",sum);


    for(int i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;
}
