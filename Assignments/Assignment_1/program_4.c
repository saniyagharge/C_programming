// Accept one number and check whether it is divisible by 5 or not.

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
//  Description :   Used to check if input is divisible by 5.
//  Author :        Saniya Gharge
//  Date :          18/10/2025
//
////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if ((iNo % 5) == 0)
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

    printf("Enter number :");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if (bRet == true)
    {
        printf("Number is divisible by 5");
    }
    else
    {
        printf("Number is not divisible by 5");
    }
    return 0;
}

////////////////////////////////////////////////////////////
//      Testcases:
//      Input : 13
//      Ouput : Number is not divisible by 5.
//      Input : 15
//      Ouput : Number is divisible by 5.
////////////////////////////////////////////////////////////