#include "middle_str.h"

bool itc_isFirstInSecond(string s1, string s2){
    if (s1 == "" or s2 == "") return false;
    int i = 0;
    for (i; itc_len(itc_slice_str(s2, i, i + itc_len(s1) - 1)) == itc_len(s1); i++)
    {
        if (itc_slice_str(s2, i, i + itc_len(s1) - 1) == s1) return true;
    }
    return false;
}

string itc_Cezar(string str, int sch){
    if (sch == 0) return str;
    int i = 0;
    string res = "";
    while (str[i] != '\0'){
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
        if ((str[i] >= 'a' && str[i] <= 'z') && str[i] + sch < 'a') res += str[i] + sch + 26;
        else if ((str[i] >= 'a' && str[i] <= 'z') && (str[i] + sch > 'z')) res += str[i] + sch - 26;
        else if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i] + sch < 'A')) res += str[i] + sch + 26;
        else if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i] + sch > 'Z')) res += str[i] + sch - 26;
        else res += str[i] + sch;
        }
        else res += str[i];
        i += 1;
    }
    return res;
}

string itc_rmFreeSpace(string str){
    long long i = 0;
    string strcopy = "";
    while(str[i] != '\0')
    {
        if((str[i] == 32 && str[i - 1] != 32) || str[i] < 32 || str[i] > 32)
            strcopy += str[i];
        i++;
    }
    if (strcopy[0] == 32) strcopy = itc_slice_str(strcopy, 1 , itc_len(strcopy) - 1);
    if((strcopy[itc_len(strcopy) - 1]) == 32) strcopy = itc_slice_str(strcopy, 0 , itc_len(strcopy) - 2);
    return strcopy;
}

bool itc_isIp(string str){};

string itc_DecToBin(string str){};

string itc_decToBase(int num, int base){};
