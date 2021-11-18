#include "middle_str.h"

string itc_slice_str(string str, int n, int k){
    string itog = "";
    int rez = n;
    if (k < n) return str;
    else{
        if (k >= itc_len(str)) k = itc_len(str) - 1;
        for (rez; rez < k + 1; rez++)
            itog += str[rez];
        return itog;
    }
}

int itc_countWords(string str){
    if (str == "") return 0;
    long long s = 0;
    for(long long i = 1; str[i] < '\0';  i++) {
        if (str[i] == ' ' && (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) s += 1;
    }
    if (str[0] == 32) s -= 1;
    if (str[itc_len(str) - 2] == 32) s -= 1;
    return s;
}

string itc_maxCharWord(string str){
	if (itc_countWords(str) < 2) return "error";
	string word1 = "";
	string word2 = "";
	int i = 0;
	int sch = 0;
	for (i, sch; str[i] != '\0'; i++)
	{
		if(!(str[i] == ' ' || str[i+1] != '\0') && !(str[i] == ',' || str[i] == '.' || str[i] == '!' || str[i] == '?'))
            word1 += str[i];
            sch++;
		if (str[i] == ' ' || str[i + 1] == '\0'){
			if (itc_len(word1) > itc_len(word2)){
                word2 = word1;
                word1 = "";
                sch = 0;
            }
		}
	}
	return word2;
}


char itc_sameChar(string str){
    long long i = 0;
    for (i; str[i] != '\0'; i++){
        if (( str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
            long long j = 0;
            for (j; str[j] != '\0'; j++)
            {
                if ( str[j] == str[i])
                {
                    return str[j];
                }
            }
        }
    }
    return 32;
}
