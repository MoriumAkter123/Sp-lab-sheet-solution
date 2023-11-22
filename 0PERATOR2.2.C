#include <stdio.h>

int main() {
    int num1, num2, difference;

    // Input
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Subtraction calculation
    difference = num1 - num2;

    // Output
    printf("Difference: %d\n", difference);

    return 0;
}
