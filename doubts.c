// return is a function? how tf you implement your own functions and libraries
// how to use a function that you created, i dont have any header file how to define a function ?
// does the compiler(or C language) knows that i am implementing a function?
// "parameter list without types only allowed in function definition" HOW TF I DO A FUNCTION DEFINITION

#include <stdio.h>

const char* getname(name);

const char* getname(name)
{
   const char* name = get_string("what's your name?: ")
   return name;
}

int i= getname(name);

int main (void)
{
    printf("hello, %i", i)
}
