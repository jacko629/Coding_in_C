#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do

    {
        n =get_int("enter a postive interger: ");
    }

    while(n<1);

    for(int i = 1; i <= n; i++)
{
//make first beginning line
    if(i==1 ||i==n)
    {
        for(int j = 1; j <= n; j++)
        {
            printf("*");
        }
    }
     else if(i!=1 ||i!=n)
     {
        for (int k=1; k<=1; k++)
        printf("*");

        for(int a=1; a < n -1; a++ )
        printf("#");

        for (int b =1; b<=1; b++)
        printf("*");
     }






     printf("\n");

}




}