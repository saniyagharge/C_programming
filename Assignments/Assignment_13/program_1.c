/* Program to print all numbers from 1 to N.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : PrintNumbers
//  Description :   Used to print numbers from 1 to N.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

void PrintNumbers(int limit)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= limit; iCnt++)
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

    PrintNumbers(limit);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :5      Output:1 2 3 4 5
//   Input :12     Output:1 2 3 4 5 6 7 8 9 10 11 12
//
////////////////////////////////////////////////////////////
