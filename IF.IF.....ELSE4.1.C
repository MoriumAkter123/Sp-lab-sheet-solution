#include <stdio.h>

int main() {
    int num;

    // Read an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is odd or even
    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}
