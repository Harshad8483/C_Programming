/*
////////////////////////////////////////////////////////////
//
// Function Name : main
// Description   : Accepts the full name of the user and
//                 displays the entered name.
// Input         : String (Full Name)
// Output        : Displays the entered full name.
// Author        : Harshad Rajaram Pathare
// Date          : 04/11/2026
//
////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please Enter your Full Name: ");
    scanf("%[^\n]s", Name);

    printf("Your Name is: %s\n", Name);

    return 0;
}