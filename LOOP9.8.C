#include <stdio.h>

int findLCM(int a, int b) {
    int max = (a > b) ? a : b;

    do {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        ++max;
    } while (1);
}

int main() {
    int num1, num2;

    // Input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // LCM calculation
    int lcm = findLCM(num1, num2);

    // Output
    printf("LCM: %d\n", lcm);

    return 0;
}
