#include <stdio.h>

int main() {
    // Declare an array of integers
    int array[5];

    // Read elements into the array
    printf("Enter 5 integers:\n");
   for (int i = 0; i < 5; ++i) {
        scanf("%d", &array[i]);
    }

    // Display the elements of the array
    printf("Array elements are: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", array[i]);
    }

    return 0;
}
