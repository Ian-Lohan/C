#include <stdio.h>

int sum(int *x, int *y) {
    (*x)++;
    printf("\nAddress of x = %p ----- x = %i\n", x, *x);
    return (*x) + (*y);
}

int main() {
    int a = 10, b = 20;

    printf("\n%i + %i = %i\n", a, b, sum(&a, &b));
    printf("%i\n", a);
    return 0;
}