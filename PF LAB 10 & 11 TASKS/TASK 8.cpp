#include <stdio.h>

#define m_to_km 0.001  

float convert(float meters) {
    static int count = 0; 
    count++;

    printf("Function called %d times\n", count);

    return meters * m_to_km;
}

int main() {
    float m;

    printf("Enter distance in meters: ");
    scanf("%f", &m);

    printf("Kilometers: %.3f\n", convert(m));
    printf("Kilometers: %.3f\n", convert(m));

    return 0;
}

