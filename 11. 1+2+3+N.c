#include<stdio.h>
int main()
{
int N; //Variable declaration
printf("Enter an integer N: "); //Prompt user for input
scanf("%d", &N); //Input integer from user
int sum = 0; //Variable to store the sum
// Calculate the sum of first N natural numbers
for(int i = 1; i <= N; i++) {
    sum += i; //Add each number to sum
}
printf("The sum of the first %d natural numbers is: %d\n", N, sum); //Print the sum
return 0;
}