#include <stdio.h>

int main() {
    int num;

    // Taking input
    scanf("%d", &num);

    // Printing hexadecimal and octal values
    printf("Hexadecimal: %X\n", num); // %X for uppercase hexadecimal
    printf("Octal: %o\n", num);       // %o for octal

    return 0;
}
