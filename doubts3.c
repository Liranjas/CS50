#include <stdio.h>
#include <cs50.h>

string printname (string n);

int main (void)
{
    string n= get_string("what's your name?: ");
    string ret;
    ret = printname (n);
    printf("%s\n", ret);
}

string printname (string n)
{
    n = get_string("what's your name?: \n");
    return n;
}
