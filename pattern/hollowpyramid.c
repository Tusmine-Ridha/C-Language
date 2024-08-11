#include<stdio.h>
#include<cs50.h>

void hollowpyramid(int height);

int main()
{
    int n = get_int("Enter the height of pyramid: ");
    hollowpyramid(n);
}

void hollowpyramid(int height)
{
    //refers to the rows or height of the pyramif
    for(int i=1; i<=height; i++)
    {
        //to print the preceding spaces
        for(int j=i; j<height; j++)  //if j=1 the gives you hollow half pyramid, yet you alter this loop you might get many altered hollow pyramids
        {
            printf(" ");
        }
        //to print the asterix or any number
        for(int k=1; k <= 2*i-1; k++)
        {
            //to check where the spaces has to be specified after the asterix or not
            if(k == 1 || k == 2*i-1 || i == height )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
           printf("\n");
    }

}
