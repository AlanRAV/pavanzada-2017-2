#include <stdio.h>
int a;

int main (int argn, char ** argv){
	int i ;
	for (int i =0; i< argn; i++){
		printf("hello world %s \n", argv[i]);

	}


	return 0;
}