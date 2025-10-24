/*Program which accepts one number from user and print even
factors of that number.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : DisplayFactor.
//  Description :   It is used to print Even factors of that
//                  number.
//  Input :         Integer , Integer
//  Output :        Integer
//  Author :        Saniya Gharge
//  Date :          24/10/2025
//
////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i <= iNo; i++)
    {
        if ((iNo % i == 0))
        {
            printf("%d\n", i);
        }
    }
}

////////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 8    Output : 2 4 8
//   Input : 12   Output : 2 4 6 12
//
////////////////////////////////////////////////////////////