
/*
////////////////////////////////////////////////////////////
//
// Function Name : CalculateBonus
// Description   : Calculates employee bonus based on
//                 monthly salary and years of service.
// Input         : Monthly salary and completed years
// Output        : Bonus amount or invalid input message
// Author        : Harshad Rajaram Pathare
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary < 0 || iYears < 0)
    {
        printf("Invalid Input");
    }
    else if (iYears > 10)
    {
        fBonus = fSalary * 0.15f;
        printf("Bonus = %.2f", fBonus);
    }
    else if (iYears >= 5)
    {
        fBonus = fSalary * 0.10f;
        printf("Bonus = %.2f", fBonus);
    }
    else
    {
        fBonus = fSalary * 0.05f;
        printf("Bonus = %.2f", fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter monthly salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}
