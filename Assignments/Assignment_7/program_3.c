/*Program which accepts number from user and print its
number line.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Used to print numberline.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          26/10/2025
//
///////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
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

    Display(iValue);
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input1 : 5          Output : -5 -4 -3 -2 -1 0 1 2 3 4 5
//   Input1 : 3          Output : -3 -2 -1 0 1 2 3
//
////////////////////////////////////////////////////////////