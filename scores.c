#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    printf("The average score of %i, %i and %i is %f\n",score1,score2,score3,(score1 + score2 + score3)/(float)3);
}