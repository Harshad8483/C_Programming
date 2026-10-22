
/*
////////////////////////////////////////////////////////////
//
// Function Name : CheckLeapYear
// Description   : Checks whether a year is a leap year.
// Input         : One integer representing the year
// Output        : Leap Year, Not a Leap Year, or Invalid Year
// Author        : Harshad Rajaram Pathare
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if (iYear <= 0)
    {
        printf("Invalid Year");
    }
    else if ((iYear % 400 == 0) ||
             (iYear % 4 == 0 && iYear % 100 != 0))
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}
