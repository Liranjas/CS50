#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int x= get_int("brick size: ");
    while (x<1)
    {
        printf("try again you dumb motafucka\n");
    }

    for (int j=0;j<x;j++)
    {
        for (int i=0 ; i<x ; i++)
        {
            printf("#");
        }
        printf("\n");
    }
}