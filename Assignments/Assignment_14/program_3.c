/* Program to which accepts number from user and count
frequency of 2 in it.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : CountTwo
//  Description :   Accept number and count frequency
//                  of 2 in it.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          18/11/2025
//
///////////////////////////////////////////////////////////

int CountTwo(int iNo)
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

        if (iDigit == 2)
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

    iRet = CountTwo(iValue);
    printf("%d", iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :552       Output:1
//   Input :922231    Output:3
//   Input :9000      Output:0
//
////////////////////////////////////////////////////////////
