/*
////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accepts the number of rows and columns
//                 from the user and displays a number
//                 pattern in descending row order.
//
// Input         : Integer (iRow, iCol)
// Output        : Displays a rectangular pattern where
//                 each row contains the same number,
//                 starting from iRow and decreasing to 1.
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

    for(i = iRow; i >= 1; i--)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter numbers of Rows and Columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}