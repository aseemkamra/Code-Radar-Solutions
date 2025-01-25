#include <stdio.h>

int main() {
    int a, b;

   
    scanf("%d %d", &a, &b);

    // Check if a and b have opposite signs
    if ((a > 0 && b < 0) || (a < 0 && b > 0)) {
        printf("True\n"); // Opposite signs
    } else {
        printf("False\n"); // Same sign
    }

    return 0;
}
