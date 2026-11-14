
/*
////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accepts the number of rows and columns
//                 and displays a rectangular pattern using
//                 column numbers on the boundary and '*'
//                 symbols inside the rectangle.
// Input         : Integer (iRow, iCol)
// Output        : Displays column numbers on the boundary
//                 and '*' symbols inside the rectangle.
// Author        : Harshad Rajaram Pathare
// Date          : 14/11/2026
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
            if( i == 1 || j == 1 || i == iRow || j == iCol)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("*\t", i);
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
