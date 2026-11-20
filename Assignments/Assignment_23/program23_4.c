
/*
////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Description   : Accepts a string and displays only
//                 the digit characters present in it.
// Input         : Character pointer (str)
// Output        : Displays only digits from the given string.
// Author        : Harshad Rajaram Pathare
// Date          : 18/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    DisplayDigit(arr);

    return 0;
}
