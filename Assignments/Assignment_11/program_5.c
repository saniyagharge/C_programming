/*Accept range from user and display all numbers in between
that range in reverse order.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayRev
//  Description :   Prints range between two numbers in
//                  reverse order.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
    for (iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\n", iCnt);
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

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :25 30     Output:25 26 27 28 29 30
//   Input :10 12     Output:10 11 12
//
////////////////////////////////////////////////////////////