
/*
////////////////////////////////////////////////////////////
//
// Function Name : ChkSmall
// Description   : Accepts a character and checks whether
//                 it is a small-case alphabet or not.
// Input         : Character (ch)
// Output        : Returns TRUE if the character is a
//                 small-case alphabet; otherwise, FALSE.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character\n");
    }
    else
    {
        printf("It is not a Small case Character\n");
    }

    return 0;
}
