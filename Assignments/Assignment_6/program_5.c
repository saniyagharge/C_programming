/*Program which accept total marks and obtained marks from user and calculate total
percentage*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Percentage
//  Description :   Used to calculate percentage
//  Input :         float
//  Output :        float
//  Author :        Saniya Gharge
//  Date :          26/10/2025
//
///////////////////////////////////////////////////////////

float Percentage(float fNo1, float fNo2)
{
    float fResult = 0.0;

    if (fNo1 == 0)
    {
        return 0.0;
    }

    fResult = (fNo2 / fNo1) * 100;
    return fResult;
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    float fRet = 0.0;

    printf("Enter total Marks :\n");
    scanf("%f", &fValue1);

    printf("Enter Marks obtained :\n");
    scanf("%f", &fValue2);

    fRet = Percentage(fValue1, fValue2);
    printf("Total percentage is : %f\n", fRet);
    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input1 : 100        Input2 : 85        Output: 85.00
//   Input1 : 100        Input2 : 0         Output: 0.00
//   Input1 : 70         Input2 : 20        Output: 28.57
//
////////////////////////////////////////////////////////////