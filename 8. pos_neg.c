#include<stdio.h>
int main()
{
    int number; //Variable declaration
    printf("Enter an integer: "); //Prompt user for input
    scanf("%d", &number); //Input integer from user

    // Check if the number is positive, negative, or zero
    if(number > 0) {
        printf("%d is a positive number.\n", number); 
    }//Print if positive
    else if(number < 0) {
        printf("%d is a negative number.\n", number); //Print if negative
    }
    else {
        printf("The number is zero.\n"); //Print if zero
    }
    return 0;
}