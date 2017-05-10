#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    int height;
    do
    {
    printf("Height:");
    height = get_int();
    } while(height <1 || height >23);
    
    int space = height -1;
    int block;
    for(block=1;block<=1;block=block+1)
    {
        int i;
        for(i=0;i<space;i=i+1)
        {
            printf(" ");
        }
        
        int b;
        for(b=1;b<0;b=b-1)
        {
            printf("#");
        }
        
    }
}