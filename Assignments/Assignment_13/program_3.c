/* Program to print all odd numbers from 1 to N.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : PrintOddNumbers
//  Description :   Used to print odd numbers from 1 to N.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

void PrintOddNumbers(int limit)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= limit; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main(void)
{
    int limit = 0;

    printf("Enter number: ");
    scanf("%d", &limit);

    PrintOddNumbers(limit);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :5      Output: 1 3 5
//   Input :12     Output: 1 3 5 7 9 11
//
////////////////////////////////////////////////////////////
