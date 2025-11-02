// Program to count total factors of a number.

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : CountFactors
//  Description :   used to count total factors of a number.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

int CountFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountFactors(iValue);

    printf("Count of all factors of %d are: %d\n", iValue, iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :12      Output:6
//   Input :10      Output:4
//   Input :120     Output:16
//   Input :350     Output:12
//
////////////////////////////////////////////////////////////
