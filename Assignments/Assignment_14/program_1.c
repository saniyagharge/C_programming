/* Program to display its digits in the reverse order.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description :   Used to display digits in the reverse order.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          18/11/2025
//
///////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
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
    printf("Enter Number :");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :5000      Output:0 0 0 5
//   Input :1200      Output:0 0 2 1
//   Input :9000      Output:0 0 0 9
//
////////////////////////////////////////////////////////////
