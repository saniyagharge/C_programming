/*Accept two numbers from user and check whether the number is even or odd.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Used to Check if number is even or odd.
//  Input :         Integer
//  Output :        Integer
//  Author :        Saniya Gharge
//  Date :          24/10/2025
//
////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if (iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
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
    bool bRet = false;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    bRet = Check(iValue);
    if (bRet == true)
    {
        printf("%d is a Even number\n ", iValue);
    }
    else
    {
        printf("%d is a Odd number\n ", iValue);
    }
    return 0;
}

////////////////////////////////////////////////////////////
//
//      Testcases for the Application:
//      Input : -2              Output : Even
//      Input : 13              Output : Odd
//      Input : 12              Output : Even
//      Input : 0               Output : Even
//
////////////////////////////////////////////////////////////