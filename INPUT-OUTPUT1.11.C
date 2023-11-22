#include <stdio.h>

int main() {
    char lowercase, uppercase;
    printf("Enter a lowercase character: ");
    scanf(" %c", &lowercase);
    uppercase = (lowercase);
    printf("Uppercase: %c\n", uppercase);
    return 0;
}
