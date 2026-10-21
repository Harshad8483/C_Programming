/*
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Prints numbers from 5 to 1.
// Input         : None
// Output        : Integers from 5 to 1
// Author        : Harshad Rajaram Pathare
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>


void Display()
{
    int i = 0;

    i = 5;

    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}
