/*Program to find Area of a Circle.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : CircleArea
//  Description :   Prints Area of a circle.
//  Input :         float
//  Output :        double
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{

    double fArea = 0.0;
    float pi = 3.14;
    fArea = 3.14 * fRadius * fRadius;
    return fArea;
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

    printf("Enter Radius :");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of a circle is :%f\n", dRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :5.3         Output:88.2602
//   Input :10.4        Output:339.6223
//
////////////////////////////////////////////////////////////