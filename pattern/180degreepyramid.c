#include<stdio.h>
#include<cs50.h>

void pyramid180degree(int n);

//driver's program
int main()
{
    //ask for the height of the pyramid
    int n = get_int("enter the height of the pyramid: ");
    //call the half pyramid function
    pyramid180degree(n);
}

void pyramid180degree(int n)
{


     //loop through the height
    for(int i=1; i<=n; i++)
    {
    //loop through the number printing
    for(int j=1; j<=i; j++)
    {
        printf("%i ", i);

    }
    //get out of j loop to go to next line
       printf("\n");
    }

    //loop through the height
    for(int k=n-1; k>=1; k--)
    {
    //loop through the number printing
    for(int l=1; l<=k; l++)
    {
        printf("%i ", k);

    }
    //get out of j loop to go to next line
       printf("\n");
    }



}
