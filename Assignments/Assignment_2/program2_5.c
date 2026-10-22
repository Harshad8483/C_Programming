
/*
////////////////////////////////////////////////////////////
//
// Function Name : ChkEven
// Description   : Checks whether a number is even or odd.
// Input         : One integer
// Output        : TRUE if even, FALSE if odd
// Author        : Harshad Rajaram Pathare
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if ((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    // Display result
    if (bRet == TRUE)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    return 0;
}
