#include <stdio.h>
int main() {
    int num1, num2; // Variable declaration
    printf("Enter two integers: "); // Prompt user for input
    scanf("%d %d", &num1, &num2); // Input two integers from user

    // Compare the two numbers and print which one is larger or if they are equal
    if(num1 > num2) {
        printf("%d is the larger number.\n", num1); // Print if num1 is larger
    } 
    else if(num2 > num1) {
        printf("%d is the larger number.\n", num2); // Print if num2 is larger
    } 
    else {
        printf("Both numbers are equal.\n"); // Print if both are equal
    }
    return 0;
}