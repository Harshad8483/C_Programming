/*
////////////////////////////////////////////////////////////
//
// Function Name : PrintEven
// Description   : Prints the first iNo positive even numbers.
// Input         : One integer (iNo)
// Output        : First iNo positive even numbers
// Author        : Harshad Rajaram Pathare
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>

void PrintEven(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        return;
    }

    for (i = 1; i <= iNo; i++)
    {
        printf("%d\t", i * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
