#include <stdio.h>

int main() {
    double num1, num2;

    // Read two numbers from the user
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Determine and display the maximum
    if (num1 > num2) {
        printf("Maximum: %lf\n", num1);
    } else {
        printf("Maximum: %lf\n", num2);
    }

    return 0;
}
