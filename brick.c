#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int x= get_int("brick size: "); //square size
    for (int j=0;j<x;j++)
    {
        for (int i=0 ; i<x ; i++)
        {
            printf("#");
        }
        printf("\n");
    }
}