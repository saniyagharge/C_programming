/*Accept 2 numbers from user and find maximum.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : FindMaximum
//  Description :   Used to find maximum between 2 numbers.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          25/10/2025
//
////////////////////////////////////////////////////////////

int FindMaximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    if (a < b)
    {
        return b;
        2
    }
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int num1, num2, result;

    printf("Enter 2 numbers :\n");
    scanf("%d %d", &num1, &num2);

    result = FindMaximum(num1, num2);
    printf("Maximum is : %d\n", result);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 12 14                    Output : 14
//   Input : 1 2                      Output : 2
//
////////////////////////////////////////////////////////////