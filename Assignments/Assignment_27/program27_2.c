
/*
////////////////////////////////////////////////////////////
//
// Function Name : CountSmall
// Description   : Accepts a string and counts the total
//                 number of small-case characters present.
// Input         : Character pointer (str)
// Output        : Returns the total number of small-case
//                 characters in the given string.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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

    iRet = CountSmall(arr);

    printf("%d\n", iRet);

    return 0;
}
