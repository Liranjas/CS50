#include <cs50.h>
#include <stdio.h>

greet (name)
{
    string name = get_string("what's your name? ");
    printf("hello, %s", name);
}

int main (void)
{
    greet(name);
}

