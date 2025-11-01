/*Program to which accepts area in square meter and convert
it into squaremeter.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : SquareMeter
//  Description :   Prints conversion from squarefeet to squaremeter.
//  Input :         integer
//  Output :        double
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double area = 0.0;
    area = iValue * 0.0929;
    return area;
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet :");
    scanf("%f", &fValue);

    dRet = SquareMeter(fValue);

    printf("Area in squaremeter is : %f\n", dRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :5                        Output:0.464500
//   Input :10                       Output: 0.929000
//
////////////////////////////////////////////////////////////