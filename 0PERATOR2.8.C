#include <stdio.h>

int main() {
    float radius, area;

    // Input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Area calculation
    area = 3.14159 * radius * radius;

    // Output
    printf("Area of the circle: %.2f\n", area);

    return 0;
}
