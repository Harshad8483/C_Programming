/*
////////////////////////////////////////////////////////////
//
// Function Name : Table
// Description   : Accepts a number and displays its
//                 multiplication table up to 10.
// Input         : Integer (iNo)
// Output        : Multiplication table of the given number.
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>


void Table(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt=1; iCnt<=10; iCnt++)
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

    printf("Enter a number: ");
    scanf("%d", &iValue);
    Table(iValue);
    return 0;
}   