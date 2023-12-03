#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;

    // Read integers and calculate sum
    printf("Enter integers (enter 0 to finish):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        sum += num;
        count++;
    }

    // Display the average
    if (count > 0) {
        float average = (float)sum / count;
        printf("Average: %.2f\n", average);
    } else {
        printf("No numbers entered, cannot calculate average.\n");
    }

    return 0;
}
