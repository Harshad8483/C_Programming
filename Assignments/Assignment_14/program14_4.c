/*
////////////////////////////////////////////////////////////
//
// Function Name : SumNonFact
// Description   : Accepts a number and returns the sum of
//                 non-factors in order.
// Input         : Integer (iNo)
// Output        : Integer (Sum of non-factors in order).
// Author        : Harshad Rajaram Pathare
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 1;
    int iSum = 0;
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n", iRet);

    return 0;
}