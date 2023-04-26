#include <cs50.h>
#include <stdio.h>

int greet (name)
{
    string name= get_string("what's your name? ");
    printf("hello, %s", name);
    return name;
}