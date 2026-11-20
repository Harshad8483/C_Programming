
/*
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accepts a character and toggles its case.
//                 Converts capital letters into small
//                 letters and small letters into capitals.
//                 Other characters remain unchanged.
// Input         : Character (ch)
// Output        : Displays the modified character.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    printf("Output: %c\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
