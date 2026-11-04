/*
////////////////////////////////////////////////////////////
//
// Function Name : CountDiff
// Description   : Accepts an integer and calculates the difference between the sum of even digits and the sum of odd digits.
// Input         : Integer (iNo)
// Output        : Integer (Difference).
// Author        : Harshad Rajaram Pathare
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSumEven = 1;
    int iSumOdd = 0;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0 && iDigit % 2 == 0 )
        {
            iSumEven = iSumEven * iDigit;

        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iNo = iNo / 10;
    }

    iDiff = iSumEven - iSumOdd;
    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}