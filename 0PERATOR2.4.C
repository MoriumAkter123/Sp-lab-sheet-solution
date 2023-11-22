#include <stdio.h>

int main() {
    int num1, num2;
    float division_result;

    // Input
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Division calculation
    division_result = (float)num1 / num2;

    // Output
    printf("Division Result: %.2f\n", division_result);

    return 0;
}
