// Check if the given number is a leap year or not.

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description :   Used to given year is a leap year or not.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          25/10/2025
//
///////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if (year % 400 == 0)
    {
        printf("It is a leap year\n");
    }
    else if (year % 100 == 0)
    {
        printf("It is not a leap year\n");
    }
    else if (year % 4 == 0)
    {
        printf("It is a leap year\n");
    }
    else
    {
        printf("It is not a leap year\n");
    }
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int year = 0;

    printf("Enter Year :\n");
    scanf("%d", &year);

    CheckLeapYear(year);
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 1997                   Output : not a leap year
//   Input : 2020                   Output : leap year
//   Input : 2024                   Output : leap year
//
////////////////////////////////////////////////////////////
