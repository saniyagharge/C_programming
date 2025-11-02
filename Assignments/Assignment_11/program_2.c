/*Accept range from user and display all even numbers in
between that range.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayEven
//  Description :   Prints Even range between two numbers.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    {
        if (iStart % 2 != 0)
            iStart++;

        for (iCnt = iStart; iCnt <= iEnd; iCnt += 2)
            printf("%d ", iCnt);
    }
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point :");
    scanf("%d", &iValue1);

    printf("Enter Ending Point :");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :25 30     Output:26 28 30
//   Input :10 12     Output:10 12
//
////////////////////////////////////////////////////////////