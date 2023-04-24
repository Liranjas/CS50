#include <cs50.h>
#include <stdio.h>

const int N =3;// global variable

float average(int array[]);//implementation hint for compiler
//              --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main (void) // as abstraction, we have 1) get_int > to prompt scores (request)
                //                         2) printf  > to output the 3) average (average of array "scores")> function wich implements the mathematical operations for the average of the array "scores"
{
    int scores [N]; // scores is an array
    for (int i=0; i<N; i++)
    {
        scores [i]= get_int("score: ");
    }
    printf("Average: %f\n", average(scores));
}
//     ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
float average(int array[]) // implementation of function "average"
{
    int sum=0;
    for (int i=0; i<N; i++)
    {
        sum= sum + array[i];
    }
    return sum / (float) N;
}