
/*
////////////////////////////////////////////////////////////
//
// Function Name : CountChar
// Description   : Accepts a string and a character and
//                 counts the frequency of that character
//                 in the given string.
// Input         : Character pointer (str), Character (ch)
// Output        : Returns the total frequency of the
//                 given character in the string.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
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

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d\n", iRet);

    return 0;
}
