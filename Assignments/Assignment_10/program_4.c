/*Program to which accepts temperature in Fahrenheit and convert
it into Celsius.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : FhToCs
//  Description :   Prints conversion from Fahreinheit to
//                  Celsius.
//  Input :         integer
//  Output :        float
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

float FhToCs(float fTemp)
{
    float fCelsius = 0.0;
    fCelsius = (fTemp - 32.0) * (5.0 / 9.0);
    return fCelsius;
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;
    float fRet = 0.0;

    printf("Enter Temperature in Fahrenheit :");
    scanf("%f", &fValue);

    fRet = FhToCs(fValue);

    printf("Temperature in Celsius is : %f\n", fRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :10                       Output:-12.2222
//   Input :34                       Output:1.11111
//
////////////////////////////////////////////////////////////