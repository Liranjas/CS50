#include <stdio.h>
#include <cs50.h>

int main (void)
{

string n = get_string("what's your name?: \n");
string ret = getname(n);

string getname (string n)
{
    n = get_string("what's your name?: \n");
    return n;
}

}
