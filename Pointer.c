#include <stdio.h>

int main() {
    int a = 5;
    int *p;  // declare pointer to int

    p = &a;  // assign address of 'a' to pointer 'p'

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of pointer p: %p\n", p);
    printf("Value at address pointed by p: %d\n", *p);

    return 0;
}
