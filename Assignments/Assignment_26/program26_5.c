
/*
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accepts a character and displays its
//                 ASCII value in decimal, octal and
//                 hexadecimal formats.
// Input         : Character (ch)
// Output        : Displays ASCII value in decimal, octal
//                 and hexadecimal representations.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal      : %d\n", ch);
    printf("Octal        : %04o\n", ch);
    printf("Hexadecimal  : 0X%02X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
