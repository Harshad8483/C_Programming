
/*
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accepts a character and displays
//                 alphabets from the given character.
//                 Capital letters are displayed in forward
//                 order up to Z, and small letters are
//                 displayed in reverse order up to a.
// Input         : Character (ch)
// Output        : Displays alphabets according to the
//                 given character.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void Display(char ch)
{
    int i = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c\t", i);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c\t", i);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
