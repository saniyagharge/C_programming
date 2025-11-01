// Displays INR value of the amount entered by the user in Dollars.

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : DollarToINR
//  Description :   Accepts amount in US Dollar and returns
//                  its value in INR.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iRate = 83;
    int iRupees = iNo * iRate;
    return iRupees;
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number in USD:");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :10           Output:830
//   Input :3            Output:249
//   Input :1200         Output:99600
//
////////////////////////////////////////////////////////////