
/*
////////////////////////////////////////////////////////////
//
// Function Name : Difference
// Description   : Accepts a string and calculates the
//                 difference between lowercase and
//                 uppercase character frequencies.
// Input         : Character pointer (str)
// Output        : Returns lowercase count minus
//                 uppercase count.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCnt--;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]", arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return 0;
}
