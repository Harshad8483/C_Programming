/*
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accepts a number and displays all numbers
//                 from 1 to the given number.
// Input         : Integer (iNo)   example: 5
// Output        : Displays numbers from 1 to iNo. --> 1 2 3 4 5
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>


void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter a number");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}