
/*
////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accepts the number of elements and
//                 displays numbers in descending order,
//                 each followed by a '#' symbol.
// Input         : Integer (iNo)
// Output        : Displays numbers from iNo to 1,
//                 with a '#' symbol after each number.
// Author        : Harshad Rajaram Pathare
// Date          : 15/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = iNo; i >= 1; i--)
    {
        printf("%d\t#\t", i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
