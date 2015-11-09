#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Height:");
    int userinput = GetInt();
    int count = 0;
    
    if ( (0 < userinput) && (24 > userinput) )
    {
        for (int i = 0; i < userinput; i++ )
        {
            for (int j = 0; j < (userinput - count); j++ )
            {
                printf(" ");
            }
            count++;
            for (int j = 0; j < count; j++ )
            {
                printf("#");
            }
            printf("  ");
            for (int j = 0; j < count; j++ )
            {
                printf("#");
            }
            for (int j = 0; j < (userinput - count); j++ )
            {
                printf(" ");
            }
            printf("\n");
        }
    } else {
    printf("Please enter a number between 1 and 23.\n");
    }
    return 0;
}
