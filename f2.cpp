#include "middle_str.h"

string itc_slice_str(string str, int n, int k){
    string itog = "";
    if (k < n) return str;
    else{
        if (k >= itc_len(str)) k = itc_len(str) - 1;
        for (int rez = n; rez < k + 1; rez++)
            itog += str[rez];
        return itog;
    }
}

int itc_countWords(string str){
    if (str == "") return 0;
    long long s = 0;
    for(long long i = 1; str[i] < '\0';  i++) {
        if (str[i] == ' ' && (str[i - 1] >= 'a' && str[i - 1] <= 'z' || str[i - 1] >= 'A' && str[i - 1] <= 'Z')) s += 1;
    }
    if (str[0] == 32) s -= 1;
    if (str[itc_len(str) - 2] == 32) s -= 1;
    return s;
}

string itc_maxCharWord(string str){
    int counter = 0;
    string newWord = "";
    string res = "";
    for(int i = 0; i < itc_len(str) + 1; i++){
        if((str[i] == ' ' or str[i] == '\0') && (itc_len(newWord) > itc_len(res))){
            res = newWord;
            newWord = "";
        }
        if((str[i] >= 'A' and str[i] <= 'Z') || (str[i] >= 'a' and str[i] <= 'z')){
            newWord += str[i];
        }
        if(str[i] == ' ' && str[i + 1] != ' '){
            newWord = "";
            counter += 1;
        }
    }
    if(counter == 0){
        return "error";
    }
    return res;
}


char itc_sameChar(string str){
    for (long long i = 0; str[i] != '\0'; i++){
        if (( str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
            for (long long j = 0; str[j] != '\0'; j++)
            {
                if (str[j] == str[i])
                {
                    return str[j];
                }
            }
        }
    }
    return 32;
}
