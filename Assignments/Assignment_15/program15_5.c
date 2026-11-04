/*
////////////////////////////////////////////////////////////
//
// Function Name : Percentage
// Description   : Accepts total marks and obtained marks
//                 and calculates the percentage.
// Input         : Integer (iTotal, iObtained)
// Output        : Percentage in float.
// Author        : Harshad Rajaram Pathare
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

float Percentage(int iTotal, int iObtained)
{
    float fPercentage = 0.0f;

    if(iTotal <= 0 || iObtained < 0 || iObtained > iTotal)
    {
        return -1.0f;
    }

    fPercentage = ((float)iObtained / iTotal) * 100;

    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    if(fRet == -1.0f)
    {
        printf("Invalid Marks\n");
    }
    else
    {
        printf("Percentage is: %.1f%%\n", fRet);
    }

    return 0;
}