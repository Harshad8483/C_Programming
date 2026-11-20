
/*
////////////////////////////////////////////////////////////
//
// Function Name : struprx
// Description   : Accepts a string and converts all
//                 lowercase characters into uppercase.
// Input         : Character pointer (str)
// Output        : Converts the given string into uppercase.
// Author        : Harshad Rajaram Pathare
// Date          : 18/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    struprx(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}
