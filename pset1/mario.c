#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompt User for Integer and Validate u
    int height;
    do
    {
    printf("Height:");
    height = get_int();
    } while(height <0 || height >23);
    
    int space = height -1;
    int block = 1;
    for(block=0;block<height;block=block+1)
    {
       int i;
        for(i=0;i<space;i=i+1)
        {
            printf(" ");
        }
        
    
        int b;
        for(b=0;b<=block;b=b+1)
        {
            printf("#");
        }
        printf("  ");
             for(b=0;b<=block;b=b+1)
        {
            printf("#");
        }
        printf("\n");
        space = space-1;

    }

}
