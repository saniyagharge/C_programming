/* Program to which accepts number from user and count
frequency of such digits which are less than 6.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Count
//  Description :   Accept number and count frequency
//                  of such digits which are less than 6.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          18/11/2025
//
///////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit < 6)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
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

    iRet = Count(iValue);
    printf("%d", iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :5444      Output:4
//   Input :922231    Output:5
//   Input :4         Output:1
//   Input :96672     Output:1
//
////////////////////////////////////////////////////////////
