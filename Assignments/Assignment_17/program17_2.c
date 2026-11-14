/*
////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accepts the number of rows and columns
//                 from the user and displays an alternate
//                 even and odd number pattern.
//
// Input         : Integer (iRow, iCol)
// Output        : Displays even numbers in odd rows and
//                 odd numbers in even rows.
//
// Author        : Harshad Rajaram Pathare
// Date          : 14/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNum = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            iNum = 2;
        }
        else
        {
            iNum = 1;
        }

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNum);

            iNum = iNum + 2;
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}