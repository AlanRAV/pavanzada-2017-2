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
    int start, end, len;
    char temp, *ptr = NULL;
     
    // String Lenght
    len = strlen(s);  
     
    // Create pointer array
    ptr = malloc(sizeof(char)*(len+1)); 
     
    // Copy string to pointer
    ptr = strcpy(ptr,s);           
     
    // Swap characters
    for (start=0,end=len-1; start<=end; start++,end--)
    {
        temp = ptr[start];
        ptr[start] = ptr[end];       
        ptr[end] = temp;
    }
     
    // Return pointer of reversed string
    return ptr; 
}
