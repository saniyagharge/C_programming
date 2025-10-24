/*Accept number from user and display summation of all of
its non-factors*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : SumOfNonFactors
//  Description :   Used to display summation of non-factors.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          25/10/2025
//
////////////////////////////////////////////////////////////

int SumOfNonFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
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

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = SumOfNonFactors(iValue);
    printf("Summation is : %d\n", iRet);
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 12                       Output : 50
//   Input : 10                       Output : 37
//
////////////////////////////////////////////////////////////