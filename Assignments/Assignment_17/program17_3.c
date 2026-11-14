/*
////////////////////////////////////////////////////////////
//
// Function Name : Pattern
// Description   : Accepts the number of rows and columns
//                 from the user and displays an alternate
//                 character and number pattern.
//                 Odd rows display lowercase alphabets,
//                 while even rows display ascending numbers.
//
// Input         : Integer (iRow, iCol)
// Output        : Displays an alternate lowercase alphabet
//                 and numeric pattern.
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
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {  
        if(i % 2 != 0)
        {
            ch = 'A';
        }
        else
        {
            iNum = 1;
        }

        for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
        {
            if (i % 2 == 0)
            {
                printf("%d\t", iNum);
                iNum = iNum + 1;
            }
            else
            {
                printf("%c\t", ch + 32);
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