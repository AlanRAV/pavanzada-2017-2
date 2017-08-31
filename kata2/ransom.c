#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ransom.h"


/*int constructor(char * message, char * scrabble) {
    char * message_copied;
    message_copied = strdup(message);
    char * current;
    int i;
    for (current = scrabble; *current != '\0'; current++) {
        for (i = 0; message_copied[i] != '\0'; i++) {
            if(*current == message_copied[i]) {
                message_copied[i] = '*';
                break;
            }
        }
    }
    for (i = 0; message_copied[i] != '\0'; i++) {
        if(message_copied[i] != ' ' && message_copied[i] != '*') {
            free(message_copied);
	    printf("FAIL!: The scrabble can not write the sentence.\n");
            return 0;
        }
	
    }
    free(message_copied);
    printf("GOOD JOB!: The scrabble can write the sentence.\n");
    return 1;

}
*/
int canConstruct(char* ransomNote, char* magazine) {
    int len_r = strlen(ransomNote);
    int len_m = strlen(magazine);
    int count_r[26] = {0};
    int count_m[26] = {0};
    int i;
    for(i = 0; i < len_r; ++i) ++count_r[ransomNote[i]-'a'];
    for(i = 0; i < len_m; ++i) ++count_m[magazine[i]-'a'];
    for(i = 0; i < 26; ++i)
        if(count_r[i] > count_m[i]) break;
    if(26 == i) return 1;
    return 0;
}