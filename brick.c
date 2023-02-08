#include <stdio.h>
int main (void)
{
    int const x=3; //square size
    for (int j=0;j<x;j++)
    {
        for (int i=0 ; i<x ; i++)
        {
            printf("#");
        }
        printf("\n");
    }
}