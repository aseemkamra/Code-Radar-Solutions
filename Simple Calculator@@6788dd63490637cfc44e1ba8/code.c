#include<stdio.h>

int main() {
    int a, b;
    char c;

    scanf("%d %d", &a, &b);
    scanf(" %c", &c);  // FIX: Space before %c to ignore whitespace

    if (c == '+') {
        printf("%d", a + b);
    } 
    else if (c == '-') {
        printf("%d", a - b);
    } 
    else if (c == '/') {
        if (b == 0)  // Handling division by zero
            printf("error");
        else
            printf("%d", a / b);
    } 
    else if (c == '*') {
        printf("%d", a * b);
    } 
    else {
        printf("error");  // Handling invalid operator
    }

    return 0;
}
