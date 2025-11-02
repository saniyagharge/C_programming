// Program to print all factors of a number.

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : PrintFactors
//  Description :   Prints factors of a number.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

void PrintFactors(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
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

    printf("Enter number: ");
    scanf("%d", &iValue);

    PrintFactors(iValue);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :25      Output:1 5 25
//   Input :10      Output:1 2 5 10
//
////////////////////////////////////////////////////////////
