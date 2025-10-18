#include<stdio.h>
int main() {
    int num, i, isPrime = 1; //isPrime ekta flag jeita initialized to true(1)

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for(i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                isPrime = 0; // Found a divisor, not prime
                break;
            }
        }
    }
//flag tta rakha hoise track rakhar jonno je number ta prime kina
    if(isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}