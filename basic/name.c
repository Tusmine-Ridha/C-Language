#include<stdio.h>

int main(void)
{
    char name[40];
    printf("Name: ");
    scanf("%s", name);
    printf("Hello %s, How you doing\n", name);
    return 0;
}
