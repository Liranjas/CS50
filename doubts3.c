#include <stdio.h>
#include <cs50.h>

int main (int argc, string argv[])
{
    string printname (string n)
    {
        n = get_string("what's your name?: \n");
        printf("%s",n);

    }
    printname (argv[1]);
}
