#include <cs50.h>
#include <stdio.h>

string greet (name)
{
    string name= get_string("what's your name? ");
    printf("hello, %s", name);
}

string greet (name);

int main (void)
{
    string greet(name);
}

