#include <stdlib.h>
#include <stdio.h>
#include "project2.h"
/* Add function signatures here */
int main(int argc, char **argv) {
	char  *s ;
    char * expected = "olleh";
    printf("String to reverse:\n");
    scanf("%s", s);
    printf("Reversed string:\n");
    char * reversed =  reverseString(s);

    printf("%s\n", reversed);




  /* Start your code here */
  //printf("Hello from main\n");
  return 0;
}
