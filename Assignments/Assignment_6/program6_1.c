
/*
////////////////////////////////////////////////////////////
//
// Function Name : CalculateElectricityBill
// Description   : Calculates the electricity bill using
//                 progressive slab-wise rates.
// Input         : Electricity units consumed (integer)
// Output        : Total bill or invalid consumption message
// Author        : Harshad Rajaram Pathare
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits < 0)
    {
        printf("Invalid unit consumption");
    }
    else if (iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
        printf("Bill = %.2f", fBill);
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);
        printf("Bill = %.2f", fBill);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.0f)
                + ((iUnits - 200) * 10.0f);
        printf("Bill = %.2f", fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
