#include <stdio.h>
#include <cs50.h>
int main (void)
{

}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("type: ");
    }
    while (n<1);
    return n;

}
