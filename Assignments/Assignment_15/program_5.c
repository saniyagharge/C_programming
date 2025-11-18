/* Program to which accepts number from user and return
difference between summation of even digits and summation
of odd digits.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : CountDifference
//  Description :   difference between summation of even digits
//                  and summation of odd digits.
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          18/11/2025
//
///////////////////////////////////////////////////////////

int CountDifference(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iDiff = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        if (iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo / 10;
    }
    iDiff = iSumEven - iSumOdd;

    return iDiff;
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = CountDifference(iValue);
    printf("%d", iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :2395      Output:-15
//   Input :1018      Output:6
//   Input :4222      Output:10
//
////////////////////////////////////////////////////////////