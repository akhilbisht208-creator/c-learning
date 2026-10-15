#include <stdio.h>

void change_value(int* n) {
    *n = *n * 10;
}

int main() {
    int x = 40;

    printf("The value of x is %d\n", x);

    change_value(&x);

    printf("Changed value of x is %d", x);

    return 0;
}