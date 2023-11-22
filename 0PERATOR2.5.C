#include <stdio.h>

int main() {
    float num1, num2, division_result;

    // Input
    printf("Enter the first floating-point number: ");
    scanf("%f", &num1);

    printf("Enter the second floating-point number: ");
    scanf("%f", &num2);

    // Division calculation
    division_result = num1 / num2;

    // Output
    printf("Division Result: %.2f\n", division_result);

    return 0;
}
