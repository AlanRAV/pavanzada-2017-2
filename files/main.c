#include <stdlib.h>
#include <stdio.h>
#include "texto.h"
#include <assert.h>
 #include <ctype.h>
/*
int main(int argc, char **argv) {
  FILE *myFile;
  assert(argc == 2);
  myFile = fopen(argv[1], "r");
  assert(myFile != NULL);

  int c;
  while((c = fgetc(myFile)) != EOF){
  	putchar(toupper(c));
  }
  fclose(myFile);
  return 0;
}

*/

int main(int argc, char **argv) {
  FILE *myFile;
  assert(argc == 2);
  myFile = fopen(argv[1], "r");
  assert(myFile != NULL);


  int temperature = 0;
  double average = 0;
  int count = 0;
  while(!feof(myFile)){
  	fscanf(myFile, "temp %d\n", &temperature);
  	printf("temp =  %d\n",temperature );
  	if (feof(myFile)){
  		break;
  	}
  	if (count == 0){
  		average = temperature;
  		count = 1;
  	}
  	else{
  		average = average * count +temperature;
  		count +=1;
  		average /= count;
  	}
  }
  fclose(myFile);
  printf("The average is  %lf\n", average);
  return 0;
}

