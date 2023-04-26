#include <cs50.h>
#include <stdio.h>

int main (void)
{
    printf("%f", greet(name));
}

string greet (name)
{
    string name= get_string("what's your name? ");
    printf("hello, %s", name);
    
}