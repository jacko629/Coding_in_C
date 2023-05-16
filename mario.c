#include<stdio.h>
#include<cs50.h>

int get_size(void);
void print_grid(int size);

 int main(void)
{
    //get size of grid
    int n = get_size();

    //creates grid
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while(n < 1);
    return n;
}

void print_grid(int n)
{
    for (int i = 0; i < n; i++)
    {
       
        {
            printf("#");
        }
        printf("\n");
    }
}
