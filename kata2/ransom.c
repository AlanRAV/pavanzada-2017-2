#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ransom.h"


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