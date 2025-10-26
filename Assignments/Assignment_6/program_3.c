/*Program which accepts 2 numbers from user and check whether they are
equal or not.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////
//
//  Function Name : CheckEqual
//  Description :   Used to check if 2 numbers are equal.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          25/10/2025
//
///////////////////////////////////////////////////////////

bool CheckEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
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

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    printf("Enter two numbers : \n");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = CheckEqual(iValue1, iValue2);
    if (bRet == true)
    {
        printf("EQUAL \n", bRet);
    }
    else
    {
        printf("NOT EQUAL \n", bRet);
    }
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 12 15         Output : NOT EQUAL
//   Input : 12 12         Output : EQUAL
//   Input : -10 10        Output : EQUAL
//
////////////////////////////////////////////////////////////