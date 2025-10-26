/*Program which accepts name from user and prints
that name.*/

#include <stdio.h>

int main()
{
    char Name[30];

    printf("Enter name :\n");
    scanf("%s", Name);

    printf("Your name is %s ", Name);
    return 0;
}