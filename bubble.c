#include <stdio.h>

void bubble (int *v, int size) {
    int swap=1; //swap flag
    int i=0;
    int aux;
    while (swap) {
        swap = 0;
        while (i < size - 1) {
            if (v[i] > v[i+1]) {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                swap = 1;
            }
            i++;
        }
        i = 0;
    }
}

int main() {
    int n1, n2, n3, n4, n5;
    printf("Insert 1st number: ");
    scanf("%i", &n1);
    printf("Insert 2nd number: ");
    scanf("%i", &n2);
    printf("Insert 3rd number: ");
    scanf("%i", &n3);
    printf("Insert 4th number: ");
    scanf("%i", &n4);
    printf("Insert 5th number: ");
    scanf("%i", &n5);
    int array[] = {n1, n2, n3, n4, n5};
    int size = sizeof(array) / sizeof(array[0]);
    bubble(array, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}