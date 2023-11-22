#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Read three numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Determine and display the minimum
    int min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
    printf("Minimum: %d\n", min);

    return 0;
}
