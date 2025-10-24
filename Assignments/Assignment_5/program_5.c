// Used to find largest number among 3 numbers.

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description :   Used to check largest among 3 numbers
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          25/10/2025
//
///////////////////////////////////////////////////////////

int FindLargest(int x, int y, int z)
{
    if (x >= y && x >= z)
        return x;
    else if (y >= x && y >= z)
        return y;
    else
        return z;
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int a, b, c, result;
    printf("Enter 3 numbers :\n");
    scanf("%d %d %d", &a, &b, &c);

    result = FindLargest(a, b, c);
    printf("Largest number is : %d\n", result);
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 19 18 15          Output : 19
//   Input : 8 7 6            Output : 8
//   Input : -1 2 3          Output : 3
//
////////////////////////////////////////////////////////////
