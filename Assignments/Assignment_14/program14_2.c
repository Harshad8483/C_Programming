/*
////////////////////////////////////////////////////////////
//
// Function Name : FactRev
// Description   : Accepts a number and returns the
//                 factors in reverse order.
// Input         : Integer (iNo)
// Output        : Integer (Factors in reverse order).
// Author        : Harshad Rajaram Pathare
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int FactRev(int iNo)
{
    int iCnt = 1;
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo-1; iCnt > 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactRev(iValue);

    printf("%d\n", iRet);

    return 0;
}