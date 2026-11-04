/*
////////////////////////////////////////////////////////////
//
// Function Name : CountTwo
// Description   : Accepts an integer and counts the
//                 frequency of digit 2 in that number.
// Input         : Integer (iNo)
// Output        : Integer (Frequency of digit 2).
// Author        : Harshad Rajaram Pathare
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int CountTwo(int iNo)
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

        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("%d\n", iRet);

    return 0;
}