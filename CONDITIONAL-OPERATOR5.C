#include <stdio.h>

int main() {
    int num1, num2;

    // Read two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Determine and display the minimum
    int min = (num1 < num2) ? num1 : num2;
    printf("Minimum: %d\n", min);

    return 0;
}
