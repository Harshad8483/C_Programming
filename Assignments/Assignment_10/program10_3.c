
/*
////////////////////////////////////////////////////////////
//
// Function Name : KMtoMeter
// Description   : Converts distance from kilometres into
//                 metres.
// Input         : Integer (iNo) - Distance in kilometres.
// Output        : Distance in metres.
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometres: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in metres is %d\n", iRet);

    return 0;
}
