/*Accept number from user and display its factors in reverse
order.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : FactReverse
//  Description :   Used to display factors in reverse order.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          25/10/2025
//
////////////////////////////////////////////////////////////

int FactReverse(int iNo)
{
    int iCnt = 0;
    for (iCnt = iNo; iCnt > 0; iCnt--)
    {
        if ((iNo % iCnt) == 0)
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

    FactReverse(iValue);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 12                       Output : 12 6 4 3 2 1
//   Input : 10                       Output : 5 2 1
//   Input : 13                       Output : 1
//
////////////////////////////////////////////////////////////