#include<stdio.h>
int main()
{
    int number; //Variable declaration
    printf("Enter an integer: "); //Prompt user for input
    scanf("%d", &number); //Input integer from user

    // Check if the number is even or odd using modulus operator
    if(number % 2 == 0) {
        printf("%d is an even number.\n", number); 
    }//Print if even
    else {
        printf("%d is an odd number.\n", number); //Print if odd
    }
    return 0;
}