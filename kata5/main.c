#include <stdlib.h>
#include <stdio.h>
#include "kata5.h"
/* Add function signatures here */

int main(int argc, char **argv) {
    int n;
    printf("Write n: "); 
    scanf("%d", &n);
    int * size = (int *) malloc(sizeof(int));
    char ** fizzbuzz = kata5(n, size);
    int i = 0;
    for (i = 0; i < *size; i++) {
        printf("%s\n", fizzbuzz[i]);
    }
    return 0;
}
