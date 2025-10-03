#include<stdio.h>
#define PI 3.1416  //Defining constant value of PI
int main()
{
    float radius, area;  //Declaration of variables
    printf("Enter the radius of the circle: ");  //Prompt user to enter radius
    scanf("%f",&radius);                        //Input from user
    area = PI * radius * radius;                //Area calculation formula
    printf("The area of the circle is: %.2f\n",area); //Print area with 2 decimal places
    return 0;
}