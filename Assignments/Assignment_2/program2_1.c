
/*
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Prints * the specified number of times.
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
    int iCnt = 0;

    // Write Updater
    while (iCnt < iNo)
    {
        printf("* ");
        iCnt++;
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
