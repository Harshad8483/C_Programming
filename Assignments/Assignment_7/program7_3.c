/*
////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Accepts a number and displays all integers
//                 from -iNo to +iNo.
// Input         : Integer (iNo)   example: 5
// Output        : Displays numbers from -iNo to +iNo. --> -5 -4 -3 -2 -1 0 1 2 3 4 5
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>


void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt=-iNo; iCnt<=iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter a number");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}