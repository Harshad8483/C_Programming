
/*
////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accepts the number of elements and
//                 displays consecutive uppercase
//                 English alphabets starting from 'A'.
// Input         : Integer (iNo)
// Output        : Displays the specified number of
//                 consecutive uppercase alphabets.
// Author        : Harshad Rajaram Pathare
// Date          : 15/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    char ch = 'A';

    for(i = 1; i <= iNo; i++)
    {
        printf("%c\t", ch);
        ch++;
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
