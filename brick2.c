#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int x;
    do
    {
        x= get_int("size of square: ");
    }
    while (x < 1);

    for (int j=0;j<x;j++)
    {
        for (int i=0 ; i<x ; i++)
        {
            printf("#");
        }
        printf("\n");
    }
}










