/*Program to which accepts distance in km and convert it
into meter.*/

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : KmToMeter
//  Description :   Prints conversion from kilometre to meter.
//  Input :         integer
//  Output :        integer
//  Author :        Saniya Gharge
//  Date :          1/11/2025
//
///////////////////////////////////////////////////////////

int KmToMeter(int iNo)
{
    int Distance = 0;
    Distance = iNo * 1000;
    return Distance;
}

///////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance :");
    scanf("%d", &iValue);

    iRet = KmToMeter(iValue);

    printf("Distance in meter is :%d\n", iRet);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input :5                        Output:5000
//   Input :10                       Output:10000
//
////////////////////////////////////////////////////////////