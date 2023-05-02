#include <stdio.h>

const char* getname(void);

int i= getname(name);

int main (void)
{
    printf("hello, %i", i)
}

string getname(name)
{
   string name = get_string("what's your name?: ")
   return name;
}