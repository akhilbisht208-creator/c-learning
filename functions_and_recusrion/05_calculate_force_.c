//Write a function to calculate force of attraction on a body of mass 'm' exerted by
//earth. Consider g = 9.8m/s² .

#include <stdio.h>

float force(float m) {
    float g = 9.8;
    return m * g;
}

int main() {
    float m, force_of_attraction;

    printf("Mass of the body is: ");
    scanf("%f", &m);

    force_of_attraction = force(m);

    printf("Force of attraction on a body of mass %.2f exerted by Earth is %.2f N",
           m, force_of_attraction);

    return 0;
}