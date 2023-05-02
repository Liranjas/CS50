#include <cs50.h>
#include <stdio.h>

string name = get_string("what's your name? ");

string greet (string name);

int main (void)
{
    printf("helou, %s", greet(name));
}

string greet (string name)
{
    name = get_string("what's your name? ");
    printf("hello, %s", name);
    return name;
}
