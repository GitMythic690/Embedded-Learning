#include <stdio.h>

int main(void)
{
    char answer[50];
    printf("What's your name? ");
    scanf("%49s", answer);

    printf("Hello, %s\n", answer);
}
