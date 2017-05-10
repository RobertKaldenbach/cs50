#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Minutes :");
        int time;
        time = get_int();
        int water = time*12;
    printf("Bottles:  %i",water);
    //printf("%i",water);
}