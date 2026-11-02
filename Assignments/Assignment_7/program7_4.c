/*
////////////////////////////////////////////////////////////
//
// Function Name : OddDisplay
// Description   : Accepts a number and displays all odd
//                 numbers from 1 up to the given number.
// Input         : Integer (iNo)  example: 9
// Output        : Displays all odd numbers up to iNo. --> 1 3 5 7 9
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>


void OddDisplay(int iNo)
{
    int iCnt = 0;

    for (iCnt=1; iCnt<=iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            printf("%d\t", iCnt);
        }
    }

    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter a number");
    scanf("%d", &iValue);
    OddDisplay(iValue);
    return 0;
}