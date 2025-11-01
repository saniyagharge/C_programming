/*Program to which accepts width and height of rectangle from
user and calculate its area.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : RectArea
//  Description :   Prints Area of a rectangle
//  Input :         float
//  Output :        double
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

double RectArea(float fWidth, float fHeight)
{

    double fArea = 0.0;
    float pi = 3.14;
    fArea = fWidth * fHeight;
    return fArea;
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width :");
    scanf("%f", &fValue1);

    printf("Enter height :");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of a circle is :%f\n", dRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :5.3 , 9.8                         Output:51.834
//   Input :10.4 , 2.3                        Output:23.9199
//
////////////////////////////////////////////////////////////