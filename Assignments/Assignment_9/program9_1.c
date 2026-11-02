
/*
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accepts a number and displays N stars
//                 followed by N hash symbols.
// Input         : Integer (iNo)
// Output        : N stars followed by N hash symbols.
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

   
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
