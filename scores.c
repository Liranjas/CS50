#include <cs50.h>
#include <stdio.h>

const int N =3;

int main (void)
{
    const int N =3;
    int scores[3];
    for (int i=0; i<3; i++)
    {
        scores[i]= get_int("score:");
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2])/(float) 3);
}