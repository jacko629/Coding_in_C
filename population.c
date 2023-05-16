#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
   // int starting_lamas = get_int("Input the starting population of lamas: ");
int starting_lamas = 0;

   do
   {
       starting_lamas = get_int("Start size: ");

   }
   while(starting_lamas < 9);

    // TODO: Prompt for end size
   int end_lamas = 0;
   do
   {
        end_lamas = get_int("End size :");
   }

   while(end_lamas < starting_lamas); 



    // TODO: Calculate number of years until we reach threshold
int count = 0;
while(starting_lamas < end_lamas)
{
   starting_lamas = starting_lamas + (starting_lamas/3) - (starting_lamas/4);
   count++;
}




    // TODO: Print number of years

    printf("Years: %i\n",count);





}
