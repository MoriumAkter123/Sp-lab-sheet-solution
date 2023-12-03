#include <stdio.h>

int main() {
    int num, sum = 0;

    // Read integers and calculate sum
    printf("Enter integers (enter 0 to finish):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        sum += num;
    }

    // Display the sum
    printf("Sum: %d\n", sum);

    return 0;
}
