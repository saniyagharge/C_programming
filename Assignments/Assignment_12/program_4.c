/* Program to Sum of all total factors of a number excluding
the number itself.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : SumOfEvenFactors
//  Description :   Used to sum of all even factors.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

int SumOfEvenFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if ((iNo % iCnt == 0) && (iCnt % 2 == 0))
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

    iRet = SumOfEvenFactors(iValue);

    printf("Sum of all even factors of %d are: %d\n", iValue, iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :12      Output:12
//   Input :4       Output:2
//   Input :120     Output:216
//
////////////////////////////////////////////////////////////
