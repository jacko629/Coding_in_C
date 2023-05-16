#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Input a number for X: ");
    int y = get_int("Input a number for Y: ");


    if (x > y)
    {
        printf("%d is greater than %d\n",  x,  y);
    }

    else if (x < y)

     {

        printf("%d is less than %d\n",  x,  y);
     }

    else 
     {

        printf("The numbers are the same\n");
     }

}

