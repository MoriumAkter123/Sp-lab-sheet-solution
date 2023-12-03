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

    // Find the minimum value
    int min = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    // Display the minimum value
    printf("Minimum value: %d\n", min);

    return 0;
}
