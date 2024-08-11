#include<stdio.h>
#include<cs50.h>

void fulldiamondpyramid(int height);

int main()
{
    int n = get_int("Enter the height of pyramid: ");
    fulldiamondpyramid(n);
}

void fulldiamondpyramid(int height)
{
    //refers to the rows or height of the pyramid
    for(int i=1; i<=height; i++)
    {
        //to print the preceding spaces
        for(int j=1; j<height-i; j++)  //if j=1 the gives you hollow half pyramid, yet you alter this loop you might get many altered hollow pyramids
        {
            printf(" ");
        }
        //to print the asterix or any number
        for(int k=1; k <= 2*i-1; k++)
        {
                printf("*");
        }
           printf("\n");
    }

    //refers to the rows or height of the pyramid
    for(int i=height-1; i>=1; i--)
    {
        //to print the preceding spaces
        for(int j=1; j <= height - i; j++)  //if j=1 the gives you hollow half pyramid, yet you alter this loop you might get many altered hollow pyramids
        {
            printf(" ");
        }
        //to print the asterix or any number
         for(int k=1; k <= 2*i-1; k++)
        {
                printf("*");
        }
           printf("\n");
    }

}
