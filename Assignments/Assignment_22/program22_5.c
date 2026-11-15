
/*
////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accepts the number of elements and
//                 displays the first iNo even numbers
//                 by multiplying each counter value by 2.
// Input         : Integer (iNo)
// Output        : Displays even numbers from 2 to iNo * 2.
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
        printf("%d\t", i*2);
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
