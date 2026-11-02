
/*
////////////////////////////////////////////////////////////
//
// Function Name : Factorial
// Description   : Accepts a number and calculates its factorial.
// Input         : Integer (iNo)
// Output        : Factorial of the given number.
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is: %d\n", iRet);

    return 0;
}
