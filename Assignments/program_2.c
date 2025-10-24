// Accept one number from user and print that number of * on screen.

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Used to print * on screen.
//  Input :         Integer
//  Output :        *
//  Author :        Saniya Gharge
//  Date :          24/10/2025
//
////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > iCnt)
    {
        printf("*");

        iNo--;
    }
}

////////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number :");

    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}