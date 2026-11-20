
/*
////////////////////////////////////////////////////////////
//
// Function Name : FirstChar
// Description   : Accepts a string and a character and
//                 finds the first occurrence of that
//                 character in the string.
// Input         : Character pointer (str), Character (ch)
// Output        : Returns the index of the first occurrence
//                 of the character; returns -1 if not found.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
        }

        iCnt++;
        str++;
    }

    return -1;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}
