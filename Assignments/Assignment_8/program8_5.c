/*
////////////////////////////////////////////////////////////
//
// Function Name : TableRev
// Description   : Accepts a number and displays its
//                 multiplication table in reverse order.
// Input         : Integer (iNo)
// Output        : Reverse multiplication table of the given number.
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>


void TableRev(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt=10; iCnt>=1; iCnt--)
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
    TableRev(iValue);
    return 0;
} 