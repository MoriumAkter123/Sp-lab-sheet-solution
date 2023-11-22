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

    // Determine and display the median
    int median;

    if ((num1 <= num2 && num2 <= num3) || (num3 <= num2 && num2 <= num1))
        median = num2;
    else if ((num2 <= num1 && num1 <= num3) || (num3 <= num1 && num1 <= num2))
        median = num1;
    else
        median = num3;

    printf("Median: %d\n", median);

    return 0;
}
