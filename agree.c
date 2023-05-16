#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char question = get_char("Do you agree? ");

    if (question == 'y' || question == 'Y' )

    {
        printf("Agreed \n");

    }
    else if (question == 'n'  || question =='N')
    {
        printf("You do not agree.\n");
    }

    else
    {
        printf("Please type a y or a n \n");
    }


}