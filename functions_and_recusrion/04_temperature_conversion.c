//Write a function to convert Celsius temperature into Fahrenheit.
#include <stdio.h>

float temp_conversion(float celcius) {
    return celcius * (9.0 / 5.0) + 32;
}

int main() {

    float cel, temp;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);

    temp = temp_conversion(cel);

    printf("%f C in Fahrenheit is %f F", cel, temp);

    return 0;
}