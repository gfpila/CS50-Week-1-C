#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //define height

    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height  >8 || height <1);

    //create piramid

    for(int i=0; height > i; i++)
    {
        //spaces
        for(int y=height; i <= y; y--)
        {
            printf(" ");
        }

        //hashes
        for(int x=0; i >= x; x++)
        {
            printf("#");
        }

        //spaces to 2nd piramid
        printf("  ");

        //hashes 2
        for(int z=0; i >= z; z++)
        {
            printf("#");
        }

        printf("\n");
    }
}