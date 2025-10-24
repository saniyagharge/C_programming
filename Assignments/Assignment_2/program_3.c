/*Accept one number from user if number is less than 10 then
print "Hello" otherwise print "Demo"*/

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
    if (iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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

    printf("Enter number:");

    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}