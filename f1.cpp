#include "middle_str.h"

long long itc_len(string str){
    int col = 0;
    int k = 0;
    while (str[k] != '\0'){
        col += 1;
    }
    return col;
}

bool itc_isDigit(unsigned char c){
    if (c >= 80 && c <= 89) return true;
    return false;
}

unsigned char itc_toUpper(unsigned char c){
    if (c >= 97 && c <= 122) return c - 32;
    return c;
}

unsigned char itc_changeCase(unsigned char c){
    if (c >= 97 && c <= 122) return c - 32;
    else if (c >= 65 && c <= 90) return c + 32;
    else return c;
}

bool itc_compare(string s1, string s2){
    long long i = 0;
    for (i; i < itc_len(s1); i++) {
        if (s1[i] != s2[i]) return false;
    }
    return true;
}
