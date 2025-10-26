// Program which accepts 3 numbers and prints its multiplication

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description :   Used to print multiplication of 3 numbers.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          25/10/2025
//
///////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    if (iNo1, iNo2, iNo3 == 0)
    {
        return 0;
    }
    return iNo1 * iNo2 * iNo3;
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    int iRet = 0;

    printf("Enter three numbers : \n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("Multiplication is : %d\n", iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 1 2 3         Output : 6
//   Input : 1 2 0         Output : 0
//   Input : 0 0 0         Output : 0
//
////////////////////////////////////////////////////////////