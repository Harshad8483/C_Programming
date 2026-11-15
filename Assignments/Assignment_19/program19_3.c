
/*
////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accepts the number of rows and columns
//                 and displays a pattern using '$', '*',
//                 and '#' symbols based on the positions
//                 of rows and columns.
// Input         : Integer (iRow, iCol)
// Output        : Displays '$' on the diagonal, '*' above
//                 the diagonal, and '#' below the diagonal.
// Author        : Harshad Rajaram Pathare
// Date          : 15/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if( i == j )
            {
                printf("$\t", j);
            }else if( i < j )
            {
                printf("*\t", j);
            }else
            {
                printf("#\t");
            }
           
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
