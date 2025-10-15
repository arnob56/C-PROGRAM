#include <stdio.h>

int main() {
    int a, b, tempA, tempB, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    // Find GCD using Euclidean Algorithm
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;  // When b becomes 0, a is the GCD
    lcm = (tempA * tempB) / gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);

    return 0;
}
