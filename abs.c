#include <stdio.h>

const char* getname(void);

string getname(name)
{
   const char* name = get_string("what's your name?: ")
   return name;
}

int i= getname(name);

int main (void)
{
    printf("hello, %i", i)
}
