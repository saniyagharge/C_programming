/*Accept range from user and display addition of all even
numbers in between that range.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : RangeSumEven
//  Description :   Prints sum of even numbers between the
//                  range of two numbers.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    {
        if (iStart > iEnd)
        {
            printf("Invalid range\n");
            return 0;
        }

        for (iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if (iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        return iSum;
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
    int iRet = 0;

    printf("Enter Starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point : ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition of even numbers in given range is : %d\n", iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :23 30     Output:108
//   Input :10 18     Output:70
//   Input :90 18     Output:Invalid Range
//   Input :10 -18    Output:Invalid Range
//
////////////////////////////////////////////////////////////