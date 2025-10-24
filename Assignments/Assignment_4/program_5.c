/*Accept number from user and display difference between its
factors and its non-factors*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : FactDifference
//  Description :   Used to display difference between factors
//                  and non-factors.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          25/10/2025
//
////////////////////////////////////////////////////////////

int FactDifference(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
        else
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    return iSumFact - iSumNonFact;
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

    iRet = FactDifference(iValue);
    printf("Difference is : %d\n", iRet);
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 12                       Output : -34
//   Input : 86                       Output : -3563
//
////////////////////////////////////////////////////////////