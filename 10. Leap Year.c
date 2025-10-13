#include <stdio.h>
int main() {
int year; // Variable declaration
printf("Enter a year: "); // Prompt user for input
scanf("%d", &year); // Input year from user
// Check if the year is a leap year
if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    printf("%d is a leap year.\n", year); // Print if leap year
} 
else {
    printf("%d is not a leap year.\n", year); // Print if not a leap year   
}
return 0;
}
