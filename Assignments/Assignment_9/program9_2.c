
/*
////////////////////////////////////////////////////////////
//
// Function Name : DollarToINR
// Description   : Converts US Dollars into Indian Rupees.
// Input         : Integer (iNo) - Amount in US Dollars.
// Output        : Integer - Amount in Indian Rupees.
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return 0;
}
