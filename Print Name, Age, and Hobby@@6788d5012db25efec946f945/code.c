#include<stdio.h>

int main() {
    char name[50]; // Array to store the name
    int age;       // Variable to store the age
    char hobby[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your hobby: ");
    scanf("%s", hobby);

    // Print the results
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
