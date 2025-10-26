/*Program which accepts number from user and print numbers
till that number.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Used to print numbers till the number
//                  entered by the user.
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
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d", iCnt);
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
//   Input1 : 5          Output : 1 2 3 4 5
//   Input1 : 3          Output : 1 2 3
//
////////////////////////////////////////////////////////////