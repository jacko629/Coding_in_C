#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {

        n = get_int("Inter a positive interger between 1 and 8: ");
    }
        while(n < 1 || n > 8);
//loop to build blocks

  for(int i = 0; i < n; i++)
  {
    
//print dots for right alignment
    for(int k = 0;k<n-i; k++)
         {
          printf(".");
         }

//print blocks
    for(int j = -1; j<i; j++)

      {
        printf("#");
      }

        printf("\n");

    }

  }








