#include <stdio.h>

int main() {
    // Declare variables
    float num1, num2, num3;

    // Input three numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    // Determine the minimum
    float minimum = num1;
    if (num2 < minimum) {
        minimum = num2;
    }
    if (num3 < minimum) {
        minimum = num3;
    }

    // Display the result
    printf("Minimum: %f\n", minimum);

    return 0;
}
