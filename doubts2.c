#include <stdio.h>
#include <cs50.h>

string printname (string n)
{
    n = get_string("what's your name?: /n");
    return n;
}

int main (int argc, string argv[])
{
    printname(argv[1]);
}