#include <stdio.h>

void CheckNumberType(int num)
{
    if (num > 0)
    {
        printf("It is a positive number\n");
    }
    else if (num < 0)
    {
        printf("It is a negative number\n");
    }
    else
    {
        printf("It is zero\n");
    }
}

int main()
{
    int number = 0;

    printf("Enter a number:\n");
    scanf("%d", &number);

    CheckNumberType(number); // call the correct function

    return 0;
}
