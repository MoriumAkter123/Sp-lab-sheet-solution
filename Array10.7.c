#include <stdio.h>

int main() {
    // Declare an array of integers
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    // Read elements into the array
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }

    // Find the maximum value
    int max = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    // Display the maximum value
    printf("Maximum value: %d\n", max);

    return 0;
}
