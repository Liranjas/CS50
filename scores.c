#include <cs50.h>
#include <stdio.h>

const int N =3;

float average(int array[]);//implementation hint for compiler

int main (void)
{
    int scores [N];
    for (int i=0; i<N; I++)
    {
        scores [i]= get_int("score: ");
    }
    printf("Average: %f\n", average(scores));
}
float average(int array[])
{
    int sum=0;
    for (int i=0; i<N; i++)
    {
        sum= sum + array[i]
    }
}