
/*
////////////////////////////////////////////////////////////
//
// Function Name : ChkSpecial
// Description   : Accepts a character and checks whether
//                 it is one of the specified special symbols.
// Input         : Character (ch)
// Output        : Returns TRUE if the character is a special
//                 symbol; otherwise, returns FALSE.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' ||
       ch == '%' || ch == '^' || ch == '&' || ch == '*')
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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special Character\n");
    }
    else
    {
        printf("It is not a special Character\n");
    }

    return 0;
}
