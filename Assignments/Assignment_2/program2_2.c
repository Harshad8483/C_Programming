/*
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Prints * the specified number of times
//                 using a decrementing while loop.
// Input         : Integer
// Output        : Asterisks printed on the screen
// Author        : Harshad Rajaram Pathare
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>

void Display(int iNo)
{
    // Write Updater
    while (iNo > 0)
    {
        printf("* ");
        iNo--;
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
