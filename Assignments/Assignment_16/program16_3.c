/*
////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accepts the number of rows and columns 
//                 from the user and displays an alphabet pattern in matrix format.
// Input         : Integer (iRow, iCol)
// Output        : Displays alphabets from A onwards in the specified rows and columns.
//                 
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
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= iRow; i++, ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
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