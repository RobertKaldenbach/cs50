#include <stdio.h>
#include <cs50.h>

int main(void)
{   int time;

    //Prompt User for Minutes in Shower
    printf("Minutes :");
        time = get_int();

    //Calculate Water Usage
    int water = time*12;

    //print number of bottles used
    printf("Bottles:  %i",water);
}
