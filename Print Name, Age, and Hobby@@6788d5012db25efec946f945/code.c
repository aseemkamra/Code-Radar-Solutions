#include<stdio.h>

int main() {
    char name[50]; // Array to store the name
    int age;       // Variable to store the age
    char hobby[50]; // Array to store the hobby

    // Prompt and read inputs
   
    scanf("%s", name);


    scanf("%d", &age);

    
    scanf("%s", hobby);

    // Print the results
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}
