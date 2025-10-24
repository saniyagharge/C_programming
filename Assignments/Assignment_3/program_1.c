/*Program which accepts one number from user and prints that number
of even numbers on screen.*/

#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    if (iNo <= 0)
    {
        return;
    }
    for (iCnt = 2; iCnt <= 2 * iNo; iCnt += 2)
    {
        printf("%d\n", iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d", &iValue);
    PrintEven(iValue);
    return 0;
}