
/*
////////////////////////////////////////////////////////////
//
// Function Name : RectArea
// Description   : Calculates the area of a rectangle using
//                 the formula Width * Height.
// Input         : Float (fWidth, fHeight)
// Output        : Area of rectangle (Double).
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle is %.3lf\n", dRet);

    return 0;
}
