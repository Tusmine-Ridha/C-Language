#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    // Get a string
    string s = get_string("s: ");

    // Copy string's address
    string t = s;

    // Capitalize first letter in string
    t[0] = toupper(t[0]);

    // Print string twice
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    //Notice that string t = s copies the address of s to t.
    //This does not accomplish what we are desiring. The string is not copied – only the address is.
    //Instead, these are two pointers pointing at the same string.

    // Get a string
    char *u = get_string("u: ");

    // Allocate memory for another string
    char *v = malloc(strlen(u) + 1);

    // Copy string into memory, including '\0'
    for (int i = 0, n = strlen(u); i <= n; i++)
    {
        v[i] = u[i];
    }

    // Capitalize copy
    v[0] = toupper(v[0]);

    // Print strings
    printf("u: %s\n", u);
    printf("v: %s\n", v);

     // Get a string
    char *x = get_string("x: ");

    // Allocate memory for another string
    char *y = malloc(strlen(x) + 1);

    // Copy string into memory
    strcpy(y, x);

    // Capitalize copy
    y[0] = toupper(y[0]);

    // Print strings
    printf("x: %s\n", x);
    printf("y: %s\n", y);
    free(v);
    free(y);
}
