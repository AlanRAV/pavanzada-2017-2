#include <stdio.h>
#include "minunit.h"
#include "project2.h"

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

static char * testUnit() {
   char  *s = "hello";
   char * reversed =  reverseString(s);
   char * expected = "olleh";
   printf("String to reverse:\n");
   printf("%s\n", s);
   printf("Reversed string:\n");
   printf("%s\n\n", reversed);
   muAssert("error, the string is not reversed", 0 == strcmp (expected, reversed));

  return 0;
}

static char * testUnit2() {
   char  *s = "qwerty123";
   char * reversed =  reverseString(s);
   char * expected = "321ytrewq";
   printf("String to reverse:\n");
   printf("%s\n", s);
   printf("Reversed string:\n");
   printf("%s\n\n", expected);
   muAssert("error, the string is not reversed", 0 == strcmp (expected, reversed));

  return 0;
}


static char * testNULL() {
   char  *s = "hello";
   char * reversed =  reverseString(s);
   char * expected = "olleh";
   muAssert("error, the string received is NULL", s != NULL);

  return 0;
}

static char * allTests() {
  muRunTest(testUnit);
  muRunTest(testUnit2);
  muRunTest(testNULL);
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
