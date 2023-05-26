#include <stdio.h>
#include <cs50.h>

string n = get_string("what's your name?: \n");

string printname (string n)
{
    n = get_string("what's your name?: \n");
    return n;
}

int main (int argc, string argv[])
{
    printname(argv[1]);
    printf("%s", n);
}