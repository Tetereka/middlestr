#include "middle_str.h"

bool itc_isDigit(unsigned char c){
    int c1 = c;
    if (c1 >= 48 && c1 <= 57) return true;
    return false;
}

unsigned char itc_toUpper(unsigned char c){
    if (c >= 'a' && c <= 'z') return c - 32;
    return c;
}

unsigned char itc_changeCase(unsigned char c){
    if (c >= 'a' && c <= 'z') return c - 32;
    else if (c >= 'A' && c <= 'Z') return c + 32;
    return c;
}

bool itc_compare(string s1, string s2){
    if (s1 == s2) return true;
    return false;
}
