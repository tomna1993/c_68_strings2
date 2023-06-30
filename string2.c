#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CHARS 10

int main(void)
{
    // char *s = "hi!" -> this code does not work, it places the string on a memory
    // which is read only aka constant, so if we try to modify it we get segmentation fault

    // If we want to be able to modify the string we have to allocate memory for it
    // then move the string into that allocated memory field; f.e. with strcpy
    char *s = malloc(MAX_CHARS);

    // After this the value of s can be modified but have to be careful with it to 
    // not go beyond the MAX_CHARS limit
    strcpy(s, "hi!");

    printf ("s address: %p\n", s);
    printf ("%s\n", s);

    // char *p pointer is uninitialized
    char *p;
    // so it will return with a random memory address.
    printf ("p address: %p\n", p);

    // To prevent this we should initialize a pointer to NULL when we declare it
    // or give an address to it
    char *pNull = NULL;

    printf ("pNull address: %p\n", pNull);

    // We can copy the address of one pointer into another pointer
    p = s;
    printf ("p=s; p address: %p\n", p);

    // From now on we can access the "hi!" string with p and s pointer too
    // because both of them pointing to the same address
    s[0] = 'M';

    p[1] = 'e';

    printf ("s value: %s\n", s);
    printf ("p value: %s\n", p);

    // Free the memory allocated for s pointer
    free(s);

    return EXIT_SUCCESS;
}