#include <stdio.h>
#include <cs50.h>

int main (void)
{

    string n = get_string("what's your name?: \n");

    string printname (string n)
    {
        printf("%s",n);
    }
}
