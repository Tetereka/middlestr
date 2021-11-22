#include "middle_str.h"

bool itc_isFirstInSecond(string s1, string s2){
    if (s1 == "") return true;
    if (s2 == "") return false;
    for (int i=0; i <= itc_len(s2) - itc_len(s1); i++) {
        cout << itc_slice_str(s2, i, i + itc_len(s1) - 1) << endl;
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


bool itc_isIp(string str){
    int i = 0, c = 0, dotpos = 0, ip = 0, news = 0;
    string num;
    while (str[i] != '\0'){
       if (str[i] == '.'){
            num = itc_slice_str(str, dotpos, i - 1);
            dotpos = i + 1;
            c += 1;
            for (int i = 0; i < itc_len(num); i++){
                if (!itc_isDigit(num[i])) return false;
                ip += (num[i] - 48) * itc_pow(10, itc_len(num) - i - 1);
            }
            if (ip < 0 || ip > 255) return false;
            ip = 0;
       }
       i += 1;
    }
    num = itc_slice_str(str, dotpos, i - 1);
    dotpos = i + 1;
    c += 1;
    for (int i = 0; i < itc_len(num); i++){
        if (itc_isDigit(num[i]) == false) return false;
        ip += (num[i] - 48) * itc_pow(10, itc_len(num) - i - 1);
    }
    if (ip < 0 || ip > 255) return false;
    if (c == 4) return true;
    return false;
}



string itc_DecToBin(string str){
    return "0";

}

string itc_decToBase(int num, int base){
    string neww = "";
    string result = "";
    while(num > 0){
        if(num % base >= 10) neww += ((num % base) % 10) + 'A';
        else neww += (num % base) + '0';
        num /= base;
    }
    for(long i = itc_len(neww) - 1; i >= 0; i--){
        result += neww[i];
    }
    return result;
}
