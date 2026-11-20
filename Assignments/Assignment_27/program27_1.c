
/*
////////////////////////////////////////////////////////////
//
// Function Name : CountCapital
// Description   : Accepts a string and counts the total
//                 number of capital letters present in it.
// Input         : Character pointer (str)
// Output        : Returns the total number of capital
//                 characters in the given string.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
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
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    iRet = CountCapital(arr);

    printf("%d\n", iRet);

    return 0;
}
