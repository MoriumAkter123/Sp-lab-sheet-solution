#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    // Input
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Celsius conversion
    celsius = (fahrenheit - 32) * 5 / 9;

    // Output
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
