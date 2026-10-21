/*
////////////////////////////////////////////////////////////
//
// Function Name : Accept
// Description   : Prints * the specified number of times.
// Input         : Integer
// Output        : Asterisks printed on the screen
// Author        : Harshad Rajaram Pathare
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;

    iValue = 5;

    Accept(iValue);

    return 0;
}
