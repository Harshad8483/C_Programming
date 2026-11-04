/*
////////////////////////////////////////////////////////////
//
// Function Name : Count
// Description   : Accepts an integer and counts the
//                 frequency of digits less than 6 in that number.
// Input         : Integer (iNo)
// Output        : Integer (Frequency of digits less than 6).
// Author        : Harshad Rajaram Pathare
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int Count(int iNo)
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

        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("%d\n", iRet);

    return 0;
}