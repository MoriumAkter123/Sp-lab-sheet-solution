#include <stdio.h>

int main() {
    int num1, num2, product;

    // Input
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Product calculation
    product = num1 * num2;

    // Output
    printf("Product: %d\n", product);

    return 0;
}
