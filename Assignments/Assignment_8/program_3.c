/*Program to find factorial of a given number.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Factorial
//  Description :   Used to find factorial of a number.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          26/10/2025
//
///////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact *= iCnt;
    }
    return iFact;
}

// Time Complexity : O(n)

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial is :%d\n", iRet);
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 5                     Output:120
//   Input : -5                    Output:120
//   Input : 4                     Output:24
//
////////////////////////////////////////////////////////////