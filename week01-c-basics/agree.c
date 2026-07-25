#include <stdio.h>

int main()
{
    printf("Do you agree? ");
    char c;
    scanf("%c", &c);

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed\n");
    }
    else
    {
        printf("Not agreed\n");
    }

}