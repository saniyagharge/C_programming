// Program which accepts N from user and print multiples of N.

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : MultipleDisplay
//  Description :   Used to print multiples of N.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          26/10/2025
//
///////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Multiples of %d are:\n", iNo);

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d ", iNo * iCnt);
    }
}
// Time Complexity : O(n)

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//   Input : 10         Output : 10 20 30 40 50
//   Input : 8          Output : 8 16 24 32 40
//
////////////////////////////////////////////////////////////