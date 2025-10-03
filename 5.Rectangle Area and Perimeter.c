#include<stdio.h>
int main()
{
    int length, width, area, perimeter; //Variable declaration
    printf("Enter the length of the rectangle: "); //Prompt user for length 
    scanf("%d", &length); //Input length from user
    printf("Enter the width of the rectangle: "); //Prompt user for width
    scanf("%d", &width); //Input width from user
    area = length * width; //Calculate area
    perimeter = 2 * (length + width); //Calculate perimeter
    printf("The area of the rectangle is: %d\n", area); //Print area
    printf("The perimeter of the rectangle is: %d\n", perimeter); //Print perimeter

    return 0;
}