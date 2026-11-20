
/*
////////////////////////////////////////////////////////////
//
// Function Name : DisplaySchedule
// Description   : Accepts the division of a student and
//                 displays the examination schedule.
// Input         : Character (chDiv)
// Output        : Displays the examination time according
//                 to the student's division.
// Author        : Harshad Rajaram Pathare
// Date          : 20/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    switch(chDiv)
    {
        case 'A':
        case 'a':
            printf("Your exam at 7.00 AM\n");
            break;

        case 'B':
        case 'b':
            printf("Your exam at 8.30 AM\n");
            break;

        case 'C':
        case 'c':
            printf("Your exam at 9.20 AM\n");
            break;

        case 'D':
        case 'd':
            printf("Your exam at 10.30 AM\n");
            break;

        default:
            printf("Invalid Division\n");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}
