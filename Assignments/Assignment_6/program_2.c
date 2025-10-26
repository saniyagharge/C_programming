/*Program which accepts number from user and check whether the number is greater
than 100 or not.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description :   Used to check largest among 3 numbers
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          25/10/2025
//
///////////////////////////////////////////////////////////

bool CheckGreater(int iNo)
{
    if (iNo > 100)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = CheckGreater(iValue);
    if (bRet == true)
    {
        printf("Greater \n", bRet);
    }
    else
    {
        printf("Smaller \n", bRet);
    }
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 122         Output : Greater
//   Input : 12          Output : Smaller
//   Input : -1          Output : Smaller
//
////////////////////////////////////////////////////////////
