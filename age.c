#include <stdio.h>


// Function to categorize age
void categorizeAge(int age) {
    if (age < 13) {
        printf("You are a Child.\n");
    } else if (age >= 13 && age <= 19) {
        printf("You are a Teenager.\n");
    } else {
        printf("You are an Adult.\n");
    }
}

int main() {
    int age;

    // Prompt user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Validate age input
    if (age < 0) {
        printf("Invalid age! Age cannot be negative.\n");
    } else {
        categorizeAge(age);
    }

    return 0;
}

