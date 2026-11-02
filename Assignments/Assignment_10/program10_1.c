
/*
////////////////////////////////////////////////////////////
//
// Function Name : CircleArea
// Description   : Calculates the area of a circle using
//                 the formula PI * Radius * Radius.
// Input         : Float (fRadius)
// Output        : Area of the circle (Double).
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = 3.14 * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %.4lf\n", dRet);

    return 0;
}
