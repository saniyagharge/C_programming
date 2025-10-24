// Accept one character from the user and check if it id vowel or not.

////////////////////////////////////////////////////////////
//
// Required Header Files
//
////////////////////////////////////////////////////////////

#include <stdio.h>
typedef int bool;

#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////
//
//  Function Name : CheckVowel
//  Description :   Check if character is a vowel or not.
//  Input :         Char
//  Output :        String
//  Author :        Saniya Gharge
//  Date :          24/10/2025
//
////////////////////////////////////////////////////////////

bool CheckVowel(char ch)
{
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

////////////////////////////////////////////////////////////
//
// Entry point function for the Application.
//
////////////////////////////////////////////////////////////

int main()
{
    char ch = '\0';
    bool bRet = FALSE;

    printf("Enter character :\n");
    scanf("%c", &ch);

    bRet = CheckVowel(ch);

    if (bRet == TRUE)
    {
        printf("it is a vowel \n");
    }
    if (bRet == FALSE)
    {
        printf("it is not a vowel \n");
    }

    return 0;
}

////////////////////////////////////////////////////////////
//
//   Testcases for the application :
//
//   Input : a                       Output : Vowel
//   Input : b                       Output : Not a Vowel
//
////////////////////////////////////////////////////////////
