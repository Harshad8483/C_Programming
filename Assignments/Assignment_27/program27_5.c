
/*
////////////////////////////////////////////////////////////
//
// Function Name : Reverse
// Description   : Accepts a string and displays its
//                 characters in reverse order.
// Input         : Character pointer (str)
// Output        : Displays the given string in reverse order.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void Reverse(char *str)
{
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(end >= str)
    {
        printf("%c", *end);
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    Reverse(arr);

    return 0;
}
