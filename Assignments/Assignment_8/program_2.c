/*Accept number from user and print it into word.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Used to print number into word.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          26/10/2025
//
///////////////////////////////////////////////////////////

void Display(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    char *words[] = {"Zero", "One", "Two", "Three", "Four",
                     "Five", "Six", "Seven", "Eight", "Nine"};

    if (iNo >= 0 && iNo <= 9)
    {
        printf("%s\n", words[iNo]);
    }
    else
    {
        printf("Number out of range\n");
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

    Display(iValue);
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : 3                      Output: Three
//   Input : -3                     Output: Three
//   Input : 12                     Output: Number out of Range
//
////////////////////////////////////////////////////////////