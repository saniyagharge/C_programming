#include <stdio.h>
#include <stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if (iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        printf("IT IS A EVEN NUMBER\n", bRet);
    }
    else
    {
        printf("IT IS A ODD NUMBER\n", bRet);
    }
    return 0;
}