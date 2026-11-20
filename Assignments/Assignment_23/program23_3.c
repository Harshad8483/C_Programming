
/*
////////////////////////////////////////////////////////////
//
// Function Name : strtogglerx
// Description   : Accepts a string and toggles the case
//                 of each alphabet character.
// Input         : Character pointer (str)
// Output        : Converts uppercase letters into lowercase
//                 and lowercase letters into uppercase.
// Author        : Harshad Rajaram Pathare
// Date          : 18/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void strtogglerx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
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

    strtogglerx(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}
