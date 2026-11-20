
/*
////////////////////////////////////////////////////////////
//
// Function Name : strlwrx
// Description   : Accepts a string and converts all
//                 uppercase characters into lowercase.
// Input         : Character pointer (str)
// Output        : Converts the given string into lowercase.
// Author        : Harshad Rajaram Pathare
// Date          : 18/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    strlwrx(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}
