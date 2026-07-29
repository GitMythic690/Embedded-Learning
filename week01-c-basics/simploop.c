#include <stdio.h>

int num;

int main(void)
{
printf("Enter a number: ");
scanf("%d", &num);

while(1)
{
    if (num < 1)
    {
        printf("Please enter a number greater than 0: ");
        scanf("%d", &num);
    }
    else
    {
        break;
    }
}
 
for (int i = 0; i < num; i++)
{
    printf("meow\n");
}
}