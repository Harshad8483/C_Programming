/*
////////////////////////////////////////////////////////////
//
// Function Name : FactDiff
// Description   : Accepts a number and returns the difference between
//                 the sum of non-factors and the sum of factors.
// Input         : Integer (iNo)
// Output        : Integer (Difference between sums).
// Author        : Harshad Rajaram Pathare
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 1;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff = 0;
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact += iCnt;
        }
        else
        {
            iSumNonFact += iCnt;
        }
    }

    iDiff = iSumFact - iSumNonFact;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}