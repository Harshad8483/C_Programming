
/*
////////////////////////////////////////////////////////////
//
// Function Name : ChkAlpha
// Description   : Accepts a character and checks whether
//                 it is an alphabet or not.
// Input         : Character (ch)
// Output        : Returns TRUE if the character is an
//                 alphabet; otherwise, returns FALSE.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not a Character\n");
    }

    return 0;
}
