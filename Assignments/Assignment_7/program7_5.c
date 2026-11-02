/*
////////////////////////////////////////////////////////////
//
// Function Name : OddDisplay
// Description   : Accepts a number and displays the first
//                 five multiples of that number.
// Input         : Integer (iNo)  example: 5
// Output        : Displays the first five multiples of iNo. --> 5 10 15 20 25
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>


void OddDisplay(int iNo)
{
    int iCnt = 0;

    for (iCnt=1; iCnt<=5; iCnt++)
    {
        if (iNo * iCnt)
        {
            printf("%d\t", iNo * iCnt);
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