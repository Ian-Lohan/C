#include <stdio.h>
#define SIZ 5

int main() {
    int matrix[SIZ][SIZ], i, j;

    for (j=0;j<SIZ;j++) {
        for (i=0;i<SIZ;i++) {
            printf("Insert the %i value.: ", i+1);
            scanf("%i", &matrix[j][i]);
        }
    }

    for (j=0;j<SIZ;j++) {
        for (i=0;i<SIZ;i++) {
            printf("Index j%i i%i: %i\n", j, i, matrix[j][i]);
        }
    }

    return 0;
}