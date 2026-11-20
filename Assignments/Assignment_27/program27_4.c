
/*
////////////////////////////////////////////////////////////
//
// Function Name : ChkVowel
// Description   : Accepts a string and checks whether
//                 it contains at least one vowel.
// Input         : Character pointer (str)
// Output        : Returns TRUE if a vowel is present;
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

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' ||
           *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' ||
           *str == 'O' || *str == 'U')
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}
