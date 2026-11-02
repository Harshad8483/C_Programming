/*
////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accepts a number and displays a pattern
//                 of $ and * symbols based on that number.
// Input         : Integer (iNo)  e.g., 5
// Output        : Displays $ and * pattern on the screen. -->  $ * $ * $ * $ * $ *
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>


void Pattern(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("$\t*\t");
    }

    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter a number");
    scanf("%d", &iValue);
    Pattern(iValue);
    return 0;
}