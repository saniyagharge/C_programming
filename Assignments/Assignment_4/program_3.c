/*Accept number from user and display its non-factors*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : NonFactors
//  Description :   Used to display non-factors.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          25/10/2025
//
////////////////////////////////////////////////////////////

int NonFactors(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    NonFactors(iValue);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 12                       Output : 5 7 8 9 10 11
//   Input : 10                       Output : 3 4 6 7 8 9
//   Input : 4                        Output : 3
//
////////////////////////////////////////////////////////////