#include <stdio.h>
#include <cs50.h>
int main (void)
{
    int x = get_int("type x here:");
    int y = get_int("type y here:");

    if (x > y)
    {
        printf ("x is bigger\n");
    }
    else
    {
        if (x < y)
            printf("y is bigger\n");
        else
        printf("kkk/n");
    }
}