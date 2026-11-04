/*
////////////////////////////////////////////////////////////
//
// Function Name : CountOdd
// Description   : Accepts an integer and counts the
//                 frequency of odd digits in that number.
// Input         : Integer (iNo)
// Output        : Integer (Frequency of odd digits).
// Author        : Harshad Rajaram Pathare
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 != 0)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("%d\n", iRet);

    return 0;
}