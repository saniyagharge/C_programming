/* Program to print all even numbers from 1 to N.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : PrintEvenNumbers
//  Description :   Used to print even numbers from 1 to N.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

void PrintEvenNumbers(int limit)
{
    int iCnt = 0;
    for (iCnt = 2; iCnt <= limit; iCnt += 2)
    {
        printf("%d\n", iCnt);
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

    PrintEvenNumbers(limit);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :5      Output: 2 4
//   Input :12     Output: 2 4 6 8 10 12
//
////////////////////////////////////////////////////////////
