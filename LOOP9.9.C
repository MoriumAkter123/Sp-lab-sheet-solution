#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

int main() {
    int base, exponent;

    // Input
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Power calculation
    int result = power(base, exponent);

    // Output
    printf("%d to the power %d = %d\n", base, exponent, result);

    return 0;
}
