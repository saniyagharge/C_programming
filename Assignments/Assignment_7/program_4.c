/*Program which accepts number from user and print all odd
numbers upto N..*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : OddDisplay
//  Description :   Used to print odd numbers upto N.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          26/10/2025
//
///////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;
    int n = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 != 0)
        {
            printf("%d ", iCnt);
        }
    }
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

    printf("Enter number: \n");
    scanf("%d", &iValue);

    OddDisplay(iValue);
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//   Input : 15         Output : 1 3 5 7 9 11 13 15
//   Input : 8          Output : 1 3 5 7
//
////////////////////////////////////////////////////////////