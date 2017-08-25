#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIM 50

int main() {

    //Here I declare the variables that will be needed, including the sentence to be used
    char string1[LIM] =" ";
    int numLetters=0;
    int posBlank=0;

    //Here I check where the blank space is
    for(int i = 0; i < strlen(string1); i++){
        if(string1==""){
           // printf("No word");
            return 0;
        }
        else if (string1[i]==' '){
            posBlank=i;
        }
    }
    
    if(string1[0]!=' ' && posBlank==0){
        numLetters=strlen(string1);
    }
    
    else{
    
        numLetters=(strlen(string1)-1)-posBlank;
    }
    
    printf("Num. letras ultima palabra %d\n", (numLetters));    
        return 0;
}