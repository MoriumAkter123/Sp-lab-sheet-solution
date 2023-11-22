#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    // Input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Sum of digits calculation
    for (; num > 0; num /= 10) {
        digit = num % 10;
        sum += digit;
    }

    // Output
    printf("Sum of digits = %d\n", sum);

    return 0;
}
