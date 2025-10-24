/*Accept two numbers from user and display first number second
number of times.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Used to Accept two numbers from user and
//                  display first number second number of times.
//  Input :         Integer
//  Output :        Integer
//  Author :        Saniya Gharge
//  Date :          24/10/2025
//
////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if (iFrequency < 0)
    {
        iFrequency = -iFrequency;
        ;
    }
    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    printf("Enter frequency :\n");
    scanf("%d", &iCount);

    Display(iValue, iCount);
    return 0;
}

////////////////////////////////////////////////////////////
//
//      Testcases for the Application:
//      Input : 12 5            Output : 12 12 12 12 12
//      Input : -2 3            Output : -2 -2 -2
//      Input : -2 0            Output :
//      Input : 21 -3           Output : 21 21 21
//
////////////////////////////////////////////////////////////