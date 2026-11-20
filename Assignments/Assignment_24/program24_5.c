
/*
////////////////////////////////////////////////////////////
//
// Function Name : StrRevX
// Description   : Accepts a string and reverses it
//                 in-place by swapping characters.
// Input         : Character pointer (str)
// Output        : Reverses the original string.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>
#include<string.h>

void StrRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}
