#include <stdio.h>
#include "minunit.h"
#include "stdlib.h"
#include "string.h"
#include "kata5.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define RESET "\033[0m"

int testsRun = 0;

static char * testNull() {
  int n = 15;
 int * size = (int *) malloc(sizeof(int));

  char ** fizzbuzz = kata5(n, size);

  muAssert("error, its null", fizzbuzz != NULL);
  return 0;
}



static char * testUnit() {
  int n = 15;
  int * size = (int *) malloc(sizeof(int));

  char ** fizzbuzz = kata5(n, size);/*
  printf("FizzBuzz 1: %s\n", fizzbuzz[0]);
  printf("FizzBuzz 2: %s\n", fizzbuzz[1]);
  printf("FizzBuzz 3: %s\n", fizzbuzz[2]);
  printf("FizzBuzz 4: %s\n", fizzbuzz[3]);
  printf("FizzBuzz 5: %s\n", fizzbuzz[4]);
  printf("FizzBuzz 6: %s\n", fizzbuzz[5]);
  printf("FizzBuzz 7: %s\n", fizzbuzz[6]);
  printf("FizzBuzz 8: %s\n", fizzbuzz[7]);
  printf("FizzBuzz 9: %s\n", fizzbuzz[8]);
  printf("FizzBuzz 10: %s\n", fizzbuzz[9]);
  printf("FizzBuzz 11: %s\n", fizzbuzz[10]);
  printf("FizzBuzz 12: %s\n", fizzbuzz[11]);
  printf("FizzBuzz 13: %s\n", fizzbuzz[12]);
  printf("FizzBuzz 14: %s\n", fizzbuzz[13]);
  printf("FizzBuzz 15: %s\n", fizzbuzz[14]);

*/

  muAssert("error, should be 1", fizzbuzz != NULL && strcmp(fizzbuzz[0], "1") == 0);
  muAssert("error, should be 2", fizzbuzz != NULL && strcmp(fizzbuzz[1], "2") == 0);
  muAssert("error, should be Fizz", fizzbuzz != NULL && strcmp(fizzbuzz[2], "Fizz") == 0);
  muAssert("error, should be 4", fizzbuzz != NULL && strcmp(fizzbuzz[3], "4") == 0);
  muAssert("error, should be Buzz",   fizzbuzz != NULL && strcmp(fizzbuzz[4], "Buzz") == 0); 
  muAssert("error, should be Fizz",  fizzbuzz != NULL && strcmp(fizzbuzz[5], "Fizz") == 0);
  muAssert("error, should be 7", fizzbuzz != NULL && strcmp(fizzbuzz[6], "7") == 0);
  muAssert("error, should be 8", fizzbuzz != NULL && strcmp(fizzbuzz[7], "8") == 0);
  muAssert("error, should be Fizz", fizzbuzz != NULL && strcmp(fizzbuzz[8], "Fizz") == 0);
  muAssert("error, should be Buzz", fizzbuzz != NULL && strcmp(fizzbuzz[9], "Buzz") == 0);
  muAssert("error, should be 11",   fizzbuzz != NULL && strcmp(fizzbuzz[10], "11") == 0); 
  muAssert("error, should be Fizz",  fizzbuzz != NULL && strcmp(fizzbuzz[11], "Fizz") == 0);
  muAssert("error, should be 13", fizzbuzz != NULL && strcmp(fizzbuzz[12], "13") == 0);
  muAssert("error, should be 14", fizzbuzz != NULL && strcmp(fizzbuzz[13], "14") == 0);
  muAssert("error, should be Fizzuzz", fizzbuzz != NULL && strcmp(fizzbuzz[14], "Fizzbuzz") == 0);

  return 0;
}

static char * allTests() {
  muRunTest(testNull);
  muRunTest(testUnit);
  return 0;
}

int main(int argc, char **argv) {
  char *result = allTests();
  if (result != 0) {
    printf("-_-_-_-_-_-_-_,------,      o \n");
    printf("_-_-_-_-_-_-_-|   /\\_/\\ \n");
    printf("-_-_-_-_-_-_-~|__( X .X)  +     + \n");
    printf("_-_-_-_-_-_-_- \"\"  \"\" \n");
    printf(KRED "✗ %s \n" RESET, result);
  }
  else {
    printf("-_-_-_-_-_-_-_,------,      o \n");
    printf("_-_-_-_-_-_-_-|   /\\_/\\ \n");
    printf("-_-_-_-_-_-_-~|__( ^ .^)  +     + \n");
    printf("_-_-_-_-_-_-_-  \"\"  \"\" \n");
    printf(KGRN " ✓ ALL TESTS PASSED \n" RESET);
  }
  printf("Tests run: %d\n", testsRun);
  return result != 0;
}