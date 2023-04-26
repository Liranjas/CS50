#include <cs50.h>
#include <stdio.h>

string greet (name);

int main (void)
{
    printf("%s", greet(name));
}

string greet (name)
{
    string name= get_string("what's your name? ");
    printf("hello, %s", name);

}