
/*
////////////////////////////////////////////////////////////
//
// Function Name : SquareMeter
// Description   : Converts area from square feet into
//                 square metres.
// Input         : Integer (iValue) - Area in square feet.
// Output        : Area in square metres (Double).
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dMeter = 0.0;

    dMeter = iValue * 0.0929;

    return dMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square metres is %.6lf\n", dRet);

    return 0;
}
