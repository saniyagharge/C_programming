/*Program which accepts number from user and display its table
in reverse order.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Table
//  Description :   Used to Display Multiplication Table in reverse.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          26/10/2025
//
///////////////////////////////////////////////////////////

int Table(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ", iNo * iCnt);
    }
    printf("\n");
}

// Time Complexity : O(1)

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

    Table(iValue);
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :-4           Output:40 36 32 28 24 20 16 12 8 4
//   Input :2            Output:20 18 16 14 12 10 8 6 4 2
//
////////////////////////////////////////////////////////////