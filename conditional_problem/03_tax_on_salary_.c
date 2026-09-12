/*Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab Tax
2.5 - 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/

#include<stdio.h>
int salary;

int main()
{

    
    printf("Enter your salary : ");
    scanf("%d",&salary);

    if(salary>=250000 && salary<=500000){
        printf("Your salary is %d which is under the slab of 2.5L and 5.00L \nSo you have to pay 5% tax of your salary %.2f",salary,salary*0.05);
    }
    else if (salary>500000 && salary<=1000000){
        printf("Your salary is %d which is under the slab of 5.0L - 10.0L \nSo you have to pay 20% tax of your salary %.2f",salary,salary*0.2);
    }
    else if (salary>1000000 ){
        printf("Your salary is %d which is under the slab of above 10.0L \nSo you have to pay 30% tax of your salary %.2f",salary,salary*0.3);
    }
    else
    {
        printf("NO TAX FOR BELOW 2.5L");
    }

    return 0;
}