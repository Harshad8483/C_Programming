
/*
////////////////////////////////////////////////////////////
//
// Function Name : CountWhite
// Description   : Accepts a string and counts the total
//                 number of white spaces present in it.
// Input         : Character pointer (str)
// Output        : Returns the total number of white spaces.
// Author        : Harshad Rajaram Pathare
// Date          : 18/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%99[^\n]", arr);

    iRet = CountWhite(arr);

    printf("%d\n", iRet);

    return 0;
}
