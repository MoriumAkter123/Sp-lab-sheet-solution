#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Fahrenheit conversion
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
