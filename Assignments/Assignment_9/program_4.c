// Program to find odd factorial of a number

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : OddFactorial
//  Description :   Prints odd factorial of a number.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (int iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of a number is  %d is %d\n", iValue, iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :5           Output:15
//   Input :-5          Output:15
//   Input :10          Output:945
//
////////////////////////////////////////////////////////////