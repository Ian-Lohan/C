#include <stdio.h>
#define SIZ 5

int main() {
    int array[SIZ], i;

    for (i=0;i<SIZ;i++) {
        printf("Insert the %i value.: ", i+1);
        scanf("%i", &array[i]);
    }

    for (i=0;i<SIZ;i=i+2) {
        printf("Index %i: %i\n", i, array[i]);
    }

    return 0;
}