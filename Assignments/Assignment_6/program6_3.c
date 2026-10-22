
/*
////////////////////////////////////////////////////////////
//
// Function Name : CalculateDiscount
// Description   : Calculates the shopping discount and
//                 final payable amount.
// Input         : Purchase amount
// Output        : Final payable amount or invalid amount
// Author        : Harshad Rajaram Pathare
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid Purchase Amount");
    }
    else if (fAmount < 1000)
    {
        fDiscount = 0.0f;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f", fFinalAmount);
    }
    else if (fAmount < 5000)
    {
        fDiscount = fAmount * 0.10f;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f", fFinalAmount);
    }
    else
    {
        fDiscount = fAmount * 0.20f;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount = %.2f", fFinalAmount);
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
