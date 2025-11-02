/* Program to Check if number is divisible by 5.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description :   Used to check if number is divisible by 5.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if (iNo % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("%s\n ", Check(iValue) ? "YES" : "NO");

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :12      Output:NO
//   Input :25      Output:YES
//   Input :120     Output:YES
//
////////////////////////////////////////////////////////////
