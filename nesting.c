#include <stdio.h>
#include <cs50.h>

int main(void)
{
int n;
do
{
 n =get_int("enter a postive number: ");
}
while(n <1 || n > 6);

for(int i = 1; i<=n; i++)
{
    for(int j=0; j < i; j++)
    {
        printf("%i",i);
    }

   



    printf("\n");
}





}