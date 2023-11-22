#include <stdio.h>

int main() {
    // Declare variables
    float num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Determine the maximum
    float maximum = (num1 > num2) ? num1 : num2;

    // Display the result
    printf("Maximum: %f\n", maximum);

    return 0;
}
