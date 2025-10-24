// Accept one character from user and convert case of character//

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description :   Toggle case of the characters.
//  Input :         Char
//  Output :        Char
//  Author :        Saniya Gharge
//  Date :          24/10/2025
//
////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{
    if (cValue >= 'a' && cValue <= 'z') // lowercase
    {
        printf("%c", cValue - 32);
    }
    else if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue + 32); // uppercase
    }
}

////////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter Character :\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : A                        Output : a
//   Input : z                        Output : Z
//
////////////////////////////////////////////////////////////