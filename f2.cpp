
#include "middle_str.h"

string itc_slice_str(string str, int n, int k){
    if (k < n) return str;
    else{
            string itog = "";
            if (end >= itc_len(str))
                end = itc_len(str) - 1;
            int rez = n;
            for (rez; rez < k + 1; imp++)
                itog += str[rez];
            return itog;
    }
}

int itc_countWords(string str){
    long long s = 0;
    for(long long i = 1; str[i] < '\0';  i++) {
        if (str[i] == ' ' && (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) s += 1;
    }
    if (str[0] == 32) s -= 1;
    if (str[itc_len(str) - 2] == 32) s -= 1;
    return s;
}

string itc_maxCharWord(string str){}


char itc_sameChar(string str){}

bool itc_isFirstInSecond(string s1, string s2){
    bool flag = false;
    long long i = 0;
    for (i; s1[i] != '\0'; i++){
        flag = false;
        long long j = 0;
        for (j; s2[j] != '\0'; j++){
            if ( s1[i] == s2[j]){
                s2 = itc_slice_str(s2, 0 , j-1) + itc_slice_str(s2, i+1, itc_len(s2));
                flag = true;
            }
        }
        if (flag) return true;
    return true;

}
