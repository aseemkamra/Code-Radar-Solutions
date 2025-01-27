#include <stdio.h>

int main() {
    int a, b;
    
    // Input two integers
    scanf("%d %d", &a, &b);
    
    // Perform bitwise OR and store the result
    int result = a | b;
    
    // Output the result
    printf("%d\n", result);
    
    return 0;
}
