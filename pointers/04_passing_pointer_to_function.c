// Write a program having a variable i. Print the address of i.
// Pass this variable to a function and print its address.
// Are these addresses the same? Why?

#include <stdio.h>

int returning_value(int *ptr) {
    printf("Address of i inside function is: %p\n", (void *)ptr);
    printf("Value at ptr is: %d\n", *ptr);
    return 5;
}

int main() {
    int i = 5;
    int *ptr = &i;

    printf("Address of i is: %p\n", (void *)&i);

    returning_value(ptr);

    return 0;
}

--->yes these addresses are the same because we are passing the address of the variable i to the function, 
so both the main function and the returning_value function are referring to the same memory location of i.