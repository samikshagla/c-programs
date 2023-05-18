#include <stdio.h>

#define PI 3.14159

float calculateDiameter(float radius);
float calculateCircumference(float radius);
float calculateArea(float radius);

int main() {
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float diameter = calculateDiameter(radius);
    float circumference = calculateCircumference(radius);
    float area = calculateArea(radius);

    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}

float calculateDiameter(float radius) {
    return 2 * radius;
}

float calculateCircumference(float radius) {
    return 2 * PI * radius;
}

float calculateArea(float radius) {
    return PI * radius * radius;
}
