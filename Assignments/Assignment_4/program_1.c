/*Accept number from user and display multiplication of
its factors.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : MultFactor
//  Description :   Used to display multiplication of factors.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          25/10/2025
//
////////////////////////////////////////////////////////////

int MultFactor(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

////////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = MultFactor(iValue);
    printf("%d", iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 12                       Output : 144
//   Input : 13                       Output : 1
//   Input : 10                       Output : 10
//
////////////////////////////////////////////////////////////