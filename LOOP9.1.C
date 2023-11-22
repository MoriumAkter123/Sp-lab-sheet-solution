#include <stdio.h>

int main() {
    int num;
    long long factorial = 1;

    // Input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Factorial calculation
    for (int i = 1; i <= num; ++i) {
        factorial *= i;
    }

    // Output
    printf("Factorial of %d = %lld\n", num, factorial);

    return 0;
}
