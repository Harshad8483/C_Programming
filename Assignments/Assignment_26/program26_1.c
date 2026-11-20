
/*
////////////////////////////////////////////////////////////
//
// Function Name : DisplayASCII
// Description   : Displays the ASCII table with symbol,
//                 decimal, hexadecimal and octal values
//                 from 0 to 255.
// Input         : No input
// Output        : Displays ASCII character representations
//                 in decimal, hexadecimal and octal formats.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%X\t\t%o\t", i, i, i);

        if(i >= 32 && i <= 126)
        {
            printf("%c\n", i);
        }
        else if(i <= 31 || i == 127)
        {
            printf("Non-printable\n");
        }
        else
        {
            printf("Extended\n");
        }
    }
}

int main()
{
    DisplayASCII();

    return 0;
}
