#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);

    if (a == 'A') {
        printf("Excellent");
    } 
    else if (a == 'B') {
        printf("Good");
    } 
    else if (a == 'C') {  // FIX: Use 'C' instead of "C"
        printf("Average");
    } 
    else if (a == 'D') {
        printf("Below Average");
    } 
    else if(a == 'F'){
        printf("Fail");
    } 
    else{
        printf("Invalid grade");
    }

    return 0;
}
