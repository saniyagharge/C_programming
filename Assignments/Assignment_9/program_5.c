/*Program to find difference between even factorial and
odd factorial of a number.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : FactorialDiff
//  Description :   Prints difference between even factorial
//                  and odd factorial of a number.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int EvenFact = 1, OddFact = 1;
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            EvenFact = EvenFact * iCnt;
        }
        else
        {
            OddFact = OddFact * iCnt;
        }
    }
    return EvenFact - OddFact;
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

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference of a number is  %d is %d\n ", iValue, iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :5           Output:-7
//   Input :-5          Output:-7
//   Input :10          Output:2895
//
////////////////////////////////////////////////////////////