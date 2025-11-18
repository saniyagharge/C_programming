/* Program to which accepts number from user and check whether
it contains 0 or not.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

////////////////////////////////////////////////////////////
//
//  Function Name : CheckZero
//  Description :   check whether number it contains 0 or not.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          18/11/2025
//
///////////////////////////////////////////////////////////

bool CheckZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 0)
        {
            return FALSE;
        }

        iNo = iNo / 10;
    }

    return TRUE;
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = FALSE;
    printf("Enter Number :");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if (bRet == FALSE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("It does not contain zero");
    }
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :5000      Output:contains zero
//   Input :1234      Output:does not contain zero
//   Input :-9000     Output:contains zero
//
////////////////////////////////////////////////////////////
