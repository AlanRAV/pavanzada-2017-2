#include <stdlib.h>
#include <stdio.h>
#include "kata5.h"
#define LEN 20

char** kata5(int n, int* returnSize){

char ** array = (char **) malloc (n * sizeof (char *) );

	for (int i = 0; i <= n; i++){
		array[i]=malloc(LEN+1);
		if (i % 15 == 0){
			strcpy(array[i], "Fizzbuzz");
		}
		else if (i % 5 == 0){
			strcpy(array[i], "Buzz");
		}
		else if (i % 3 == 0){
			strcpy(array[i], "Fizz");
		}
		else{
			snprintf(array[i], LEN, "%d", i+1);
		}
	}
	*returnSize = n;
	return array;
}