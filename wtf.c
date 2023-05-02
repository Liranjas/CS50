#include <cs50.h>
#include <stdio.h>

string greet (string name)
{
    name = get_string("what's your name? ");
    printf("hello, %s", name);
    return name 
}

int main (void)
{
    greet(name);
}

