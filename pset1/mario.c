#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompt User for Integer and Validate
    int height;
    do
    {
    printf("Height:");
    height = get_int();
    } while(height <0 || height >23);

    //Print blocks and Spaces
    int space = height -1;
    int block = 1;
    for(block=0;block<height;block=block+1)
    {
        //Print Spaces
       int i;
        for(i=0;i<space;i=i+1)
        {
            printf(" ");
        }

        //Print First Row of Blocks
        int b;
        for(b=0;b<=block;b=b+1)
        {
            printf("#");
        }
        //Print Double Space
        printf("  ");

        //Print Second Row of Blocks go to next line
             for(b=0;b<=block;b=b+1)
        {
            printf("#");
        }
        printf("\n");

        //Remove a Space for the next loop
        space = space-1;
    }
}
