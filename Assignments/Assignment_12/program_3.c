// Program to Sum of all total factors of a number.

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : SumOfFactors
//  Description :   Used to sum of all factors of a number.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

int SumOfFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
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

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = SumOfFactors(iValue);

    printf("Sum of all factors of %d are: %d\n", iValue, iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :12      Output:28
//   Input :4       Output:7
//   Input :120     Output:360
//
////////////////////////////////////////////////////////////
