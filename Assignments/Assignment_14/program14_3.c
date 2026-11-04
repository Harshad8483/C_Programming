/*
////////////////////////////////////////////////////////////
//
// Function Name : NonFact
// Description   : Accepts a number and returns the
//                 non-factors in order.
// Input         : Integer (iNo)
// Output        : Integer (Non-factors in order).
// Author        : Harshad Rajaram Pathare
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int NonFact(int iNo)
{
    int iCnt = 1;
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo-1; iCnt++)
    {
        if(iNo % iCnt != 0)
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

    iRet = NonFact(iValue);

    printf("%d\n", iRet);

    return 0;
}