
/*
////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplay
// Description   : Accepts starting and ending points and
//                 displays all numbers within the given range.
// Input         : Two Integers (iStart, iEnd).
// Output        : Displays numbers from iStart to iEnd
//                 or prints Invalid Range.
// Author        : Harshad Rajaram Pathare
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void RangeDispaly(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d ", iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point: ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point: ");
    scanf("%d", &iValue2);

    RangeDispaly(iValue1, iValue2);

    return 0;
}
