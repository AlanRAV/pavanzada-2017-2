#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ransom.h"


int main(int argc, char **argv)
{
	printf("Welcome, the letters availables are: o,d,g,o,b,o,e,j,f,e,a,l,e,t,n. \n\n");

        char array[100];
	char * message=array;
	char * scrabble="odgoboejfealetn";

	printf("Please write a sentence\n");
    	scanf("%[^\n]", message);
	

	int result= canConstruct(message,scrabble);
	if (result==1){
		printf("True \n\n");
	}
	else if (result==0){
		printf("False \n\n");
	}
	return result;
}