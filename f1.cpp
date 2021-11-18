#include "middle_str.h"


long long itc_len(string str){
    int k = 0;
    while (str[k] != '\0'){
        k += 1;
    }
    return k;
}

bool itc_isDigit(unsigned char c){
    (c >= '0' && c <= '9') ? return true : return false;
}

unsigned char itc_toUpper(unsigned char c){
    (c >= 'a' && c <= 'z') ? return c - 32 : return c;
}

unsigned char itc_changeCase(unsigned char c){
    if (c >= 'a' && c <= 'z') return c - 32;
    else if (c >= 'A' && c <= 'Z') return c + 32;
    else return c;
}

bool itc_compare(string s1, string s2){
    long long i = 0;
    for (i; i < itc_len(s1); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}
