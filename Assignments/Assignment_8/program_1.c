/*Write a program which accept number from user and if number
is less than 50 then print small, if it is greater than 50
and less than 100 then print medium, if it is greater than
100 then print large..*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Number
//  Description :   Used to print if number is greater, medium
//                  and smaller.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          26/10/2025
//
///////////////////////////////////////////////////////////

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Number is small");
    }
    else if (iNo >= 50 && iNo <= 100)
    {
        printf("Number is medium");
    }
    else
    {
        printf("Number is large");
    }
}

// Time Complexity : O(1)

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Number(iValue);
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//   Input : 70         Output : Medium
//   Input : 49         Output : Small
//   Input : 111        Output : Large
//
////////////////////////////////////////////////////////////