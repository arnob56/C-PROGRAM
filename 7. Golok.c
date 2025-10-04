#include<stdio.h>
#define PI 3.14 // Define constant for Pi
int main() {
    int radius; // Variable declaration
    float A, V; // Variable declaration for area and Volumne
    printf("Enter the radius of the golok: "); // Prompt user for radius
    scanf("%d", &radius); // Input radius from user 
    A = 4 * PI * radius * radius; // Calculate surface area
    V = (4/3) * PI * radius * radius * radius;
    printf("The surface area of the golok is: %.2f\n", A); // Print surface area
    printf("The volume of the golok is: %.2f\n", V); // Print volume
    return 0;
}
