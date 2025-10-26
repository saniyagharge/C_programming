/*Program which accepts number from user and print that number
of $ and * on screen.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description :   Used to print $ * pattern.
//  Input :         integer
//  Output :        pattern
//  Author :        Saniya Gharge
//  Date :          26/10/2025
//
///////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    if (iNo < iCnt)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
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

    printf("Enter number: \n");
    scanf("%d", &iValue);

    Pattern(iValue);
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input1 : 5          Output : $ * $ * $ * $ * $ *
//   Input1 : 3          Output : $ * $ * $ *
//   Input1 : -3         Output : $ * $ * $ *
//
////////////////////////////////////////////////////////////