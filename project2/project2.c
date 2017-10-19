#include <stdlib.h>
#include <stdio.h>
#include "project2.h"



/** reverseString
  * It takes as an input a string that will be returned in reverse order
  * using a temp variable to swap the order of the string and save them in 
  * another pointer
  * @param:
  *   s: a string to be reversed
  * @return:
  *   char*: a ponter of the string in reverse order
 */
  

char* reverseString(char* s) {
    int i, j, len;
    char temp, *ptr = NULL;
     
    // String Lenght
    len = strlen(s);  
     
    // Create pointer array
    ptr = malloc(sizeof(char)*(len+1)); 
     
    // Copy string to pointer
    ptr = strcpy(ptr,s);           
     
    // Swap characters
    for (i=0,j=len-1; i<=j; i++,j--)
    {
        temp = ptr[i];
        ptr[i] = ptr[j];       
        ptr[j] = temp;
    }
     
    // Return pointer of reversed string
    return ptr; 
}
