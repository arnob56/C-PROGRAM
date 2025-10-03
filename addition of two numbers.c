#include<stdio.h>  //Preprocessor directive to include standard input and output functions
int main()         //Main function - execution starts from here

{   
    int a,b, c=0;    //Declaration of variables
    printf("Enter the value of A: ");     //Prompt user to enter value of A
    scanf("%d",&a);                       //Input from user
    printf("Enter the value of B: ");
    scanf("%d",&b);
    c=a+b;                   //Duita Number jog korar kaj
    printf("The sum of A and B is: %d\n",c);      //jogfol print korar jonno
    return 0;                 //main function int howar jonne return 0
}