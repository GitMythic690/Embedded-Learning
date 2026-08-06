#include <stdio.h>

int height;


int main(void)
{
    printf("Enter number of rows\n");
    scanf("%d", &height);
{
    for (int i = 0; i < height; i++) 
    {
        for (int j = height; j > i; j--)
        { 
        printf(" ");
        }
         for (int hash1 = 0; hash1 <= i; hash1++)
        { 
            printf("#");
        }
        printf("  ");
        
 for (int hash2 = 0; hash2 <= i; hash2++ )
        {
            printf("#");
        }
        printf("\n");

        
    }
       
    }
    
}
