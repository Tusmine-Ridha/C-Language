#include<stdio.h>
#include<string.h>

int main()
{
    char ch;
    char a[] = "aeiouAEIOU";
    printf("enter the character");
    scanf("%c", &ch);

    if (strchr(a, ch) != NULL)
    {
        printf("the character is a vowel\n");

    }
    else
    {
        printf("it is not a vowel\n");
    }


}
