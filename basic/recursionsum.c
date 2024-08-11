#include<stdio.h>
int sum(int num);


int main()
{
    int n;
    printf("enter the n numbers to add: ");
    scanf("%d", &n);
    printf("%d\n", sum(n));

    return 0;

}

int sum(int num)
{
    if ( num != 0)
    {
       return num = num + sum(num - 1);
    }
    else
    {
      return num;
    }


}
