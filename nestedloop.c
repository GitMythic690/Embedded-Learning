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
/*
int main(void) {
    printf("Enter number of rows\n");
    scanf("%d", &height);
    int FIXED_SPACES = 2;

    for (int i = 1; i < height; i++) {
        //printf("%d\n",i);
        int spaces_available = height - i;
        int needed_hashtags = i * 2;
        
        //printf("Spaces Available: %d\n", spaces_available);
        //printf("Needed Hashtag: %d\n", needed_hashtags);
        //printf("%d\n", spaces_available + needed_hashtags);

        int total_characters = spaces_available + FIXED_SPACES + needed_hashtags;
        for (int i = 1; i < total_characters; i++) {

            // output spaces_available, then needed_hashtags/2 then FIXED_SPACES then needed_hashtags/2
            
        }
    }
}*/

