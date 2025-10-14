#include<stdio.h>
int main()
{
    int a, b, c; // Variable declaration
    printf("Enter three integers: "); // Prompt user for input
    scanf("%d %d %d", &a, &b, &c); // Input three integers from user
    if (a >= b && a >= c) {
        printf("%d is the largest number.\n", a); // Print if a is largest
    } 
    else if (b >= a && b >= c) {
        printf("%d is the largest number.\n", b); // Print if b is largest
    } 
    else {
        printf("%d is the largest number.\n", c); // Print if c is largest
    }
    return 0;
}