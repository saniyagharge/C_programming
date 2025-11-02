/* Program to print sum of first N even numbers. */

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : SumOfEvenNumbers
//  Description :   Used to print sum of first N even numbers.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
////////////////////////////////////////////////////////////

int SumOfEvenNumbers(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iEven = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iEven = iCnt * 2; // generates even numbers: 2, 4, 6, ...
        printf("%d ", iEven);
        iSum = iSum + iEven;
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

    printf("Enter value of N: ");
    scanf("%d", &iValue);

    iRet = SumOfEvenNumbers(iValue);

    printf("\nSum of first %d even numbers is: %d\n", iValue, iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 3      Output : 12   (2 + 4 + 6)
//   Input : 5      Output : 30   (2 + 4 + 6 + 8 + 10)
//
////////////////////////////////////////////////////////////
