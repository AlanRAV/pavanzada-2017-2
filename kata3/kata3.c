#include <stdlib.h>
#include <stdio.h>
#include "kata3.h"
#include <string.h>


/** inRow
  * Receives a char * indicating the row in which it will look for first, the number of letters in the row
  * and the word to search for if it can be formed in the row
  * @param:
  *  row: the array that contains the letter in a row
  *  length: the number of letters in a row
  *  c: the word trying to find
  * @return:
  *  int: 1 | 0
*/int inRow(char *row, int length, char c) {
    for (int i = 0; i < length; i++) {
        int a = row[i];
        if (a == c || (a == c + 32)) {
            return 1;
        }
    }
    return 0;
} 

/** findWords
  * Receives a char ** of the words to look for as in an array, the size of each of the words, and the size of the array 
  * creates 3 arrays for the letters each of the rows and then looks for the words received as parameter in the rows
  * @param:
  *  words: the words to look for in the rows
  *  wordsSize: the size of the words
  *  returnSize: the size of the array or words in the row
  * @return
  *  char**: rows
*/
char** findWords(char** words, int wordsSize, int* returnSize) {
    char a[10] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    char b[9] = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    char c[7] = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
    char **rows = (char **)malloc(sizeof(char *)*wordsSize);
    int size = 0;
    for (int i = 0; i < wordsSize; i++) {
        char *word = words[i];
        int j = 0;
        int row = 0;
        int inOneRow = 1;
        while (word[j] != '\0') {
            if (row == 0) {
                if (inRow(a, 10, word[j])) {
                    row = 1;
                    continue;
                }
                if (inRow(b, 9, word[j])) {
                    row = 2;
                    continue;
                }
                if (inRow(c, 7, word[j])) {
                    row = 3;
                    continue;
                }
            } else {
                if ((inRow(a, 10, word[j]) && row != 1) || (inRow(b, 9, word[j]) && row != 2) || (inRow(c, 7, word[j]) && row != 3)) {
                    inOneRow = 0;
                    break;
                }
            }
            j++;
        }
        if (inOneRow) {
            rows[size] = word;
            size++;
        }
    }
    *returnSize = size;
    return rows;
}