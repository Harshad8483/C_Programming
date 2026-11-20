
/*
////////////////////////////////////////////////////////////
//
// Function Name : ChkDigit
// Description   : Accepts a character and checks whether
//                 it is a digit or not.
// Input         : Character (ch)
// Output        : Returns TRUE if the character is a digit;
//                 otherwise, returns FALSE.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    return 0;
}
