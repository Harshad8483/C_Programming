
/*
////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accepts the number of elements and
//                 displays numbers in ascending order,
//                 each followed by a '*' symbol.
// Input         : Integer (iNo)
// Output        : Displays numbers from 1 to iNo,
//                 with a '*' symbol after each number.
// Author        : Harshad Rajaram Pathare
// Date          : 15/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t*\t", i);
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
