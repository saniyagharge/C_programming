/*Accept range from user and return addition of all numbers
in between that range.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Description :   Prints addition of all numbers in between
//                  range of two numbers.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

void RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    {
        if (iStart <= 0 || iEnd <= 0)
        {
            printf("INVALID RANGE ");
            return;
        }

        for (iCnt = iStart; iCnt <= iEnd; iCnt++)
            iSum = iSum + iCnt;

        printf("Sum of numbers between %d and %d= %d\n", iStart, iEnd, iSum);
    }
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point :");
    scanf("%d", &iValue1);

    printf("Enter Ending Point :");
    scanf("%d", &iValue2);

    RangeSum(iValue1, iValue2);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :23 30     Output:212
//   Input :10 18     Output:126
//   Input :-10 2     Ouput: INVALID RANGE
//
////////////////////////////////////////////////////////////