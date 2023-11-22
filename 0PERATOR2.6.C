#include <stdio.h>
#include <math.h>

int main() {
    float radius, area;

    // Input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Area calculation
    area = M_PI * radius * radius;

    // Output
    printf("Area of the circle: %.2f\n", area);

    return 0;
}
