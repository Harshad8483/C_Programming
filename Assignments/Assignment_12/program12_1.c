/*
////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigits
// Description   : Accepts an integer and displays all its
//                 digits in reverse order.
// Input         : Integer (iNo)
// Output        : Displays digits in reverse order.
// Author        : Harshad Rajaram Pathare
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigits = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigits = iNo % 10;
        printf("%d\n", iDigits);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return 0;
}