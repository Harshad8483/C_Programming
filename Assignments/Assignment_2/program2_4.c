/*
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays the first number the specified
//                 number of times.
// Input         : Integer number, integer frequency
// Output        : First number printed according to frequency
// Author        : Harshad Rajaram Pathare
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int i = 0;

    // Write Updater
    if (iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }

    for (i = 0; i < iFrequency; i++)
    {
        printf("%d ", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    printf("Enter frequency");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}
