
/*
////////////////////////////////////////////////////////////
//
// Function Name : CheckTriangle
// Description   : Checks whether three sides form a valid
//                 triangle.
// Input         : Three integers representing side lengths
// Output        : Valid Triangle or Invalid Triangle
// Author        : Harshad Rajaram Pathare
// Date          : 22/10/2026
//
////////////////////////////////////////////////////////////
*/

#include <stdio.h>
#include <stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if (iSide1 > 0 && iSide2 > 0 && iSide3 > 0 &&
        iSide1 + iSide2 > iSide3 &&
        iSide1 + iSide3 > iSide2 &&
        iSide2 + iSide3 > iSide1)
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}
