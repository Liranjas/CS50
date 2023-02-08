#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int x= get_int("brick size: ");
    if (x<1)
    {
        printf("you dumb motafucka\n");
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