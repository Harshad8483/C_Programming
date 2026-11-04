/*
////////////////////////////////////////////////////////////
//
// Function Name : MultDigits
// Description   : Accepts an integer and multiplies all the digits in that number.
// Input         : Integer (iNo)
// Output        : Integer (Product of digits).
// Author        : Harshad Rajaram Pathare
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit != 0)
        {
            iMul = iMul * iDigit;
        }

        iNo = iNo / 10;
    }

    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return 0;
}