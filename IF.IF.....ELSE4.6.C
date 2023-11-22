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

    // Determine the maximum
    float maximum = num1;
    if (num2 > maximum) {
        maximum = num2;
    }
    if (num3 > maximum) {
        maximum = num3;
    }

    // Display the result
    printf("Maximum: %f\n", maximum);

    return 0;
}
