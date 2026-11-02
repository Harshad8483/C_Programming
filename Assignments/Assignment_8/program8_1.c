/*
////////////////////////////////////////////////////////////
//
// Function Name : Number
// Description   : Accepts a number and displays whether
//                 the number is Small, Medium, or Large.
// Input         : Integer (iNo)  example: 45
// Output        : Small, Medium, or Large. --> Small
// Author        : Harshad Rajaram Pathare
// Date          : 02/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>


void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small\n");
    }
    else if (iNo > 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number");
    scanf("%d", &iValue);
    Number(iValue);
    return 0;
}