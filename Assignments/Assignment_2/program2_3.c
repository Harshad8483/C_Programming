/*
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Prints Hello if the number is less than
//                 10; otherwise, prints Demo.
// Input         : Integer
// Output        : Hello or Demo
// Author        : Harshad Rajaram Pathare
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>

void Display(int iNo)
{
    if (iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
