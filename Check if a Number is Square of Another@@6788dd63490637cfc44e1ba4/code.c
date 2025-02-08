#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == b * b) {  // Corrected comparison and exponentiation
        printf("Yes");
    } else {
        printf("No");
    }
    
    return 0;
}
