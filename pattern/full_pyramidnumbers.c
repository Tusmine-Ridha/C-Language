#include<stdio.h>
#include<cs50.h>

void full_pyramidnumbers(int n);

//driver's program
int main()
{
    //ask for the height of the pyramid
    int n = get_int("enter the height of the pyramid: ");
    //call the half pyramid function
    full_pyramidnumbers(n);
}

void full_pyramidnumbers(int n)
{
    //loop through the height
    for(int i=1; i<=n; i++)
    {
    //inner loop 1 for spaces
    for(int j=1; j < 2*(n-i); j++)
    {
        printf(" ");

    }

    //inner loop 2 to print numbers
    for(int k=1; k < 2*i; k++)
    {
        printf("%i ", i);

    }


    //get out of j loop to go to next line
       printf("\n");
    }



}
