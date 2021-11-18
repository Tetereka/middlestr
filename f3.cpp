#include "middle_str.h"

string itc_Cezar(string str, int sch) {
    if (sch == 0) return str;
    int i = 0;
    string res = "";
    while (str[i] != '\0'){
        if (str[i] >= 'a' && str[i] <= 'z'){
            if (str[i] + sch < 'a') res += str[i] + sch + 26;
            else if (str[i] + sch > 'z') res += str[i] + sch - 26;
            else res += str[i] + sch;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            if (str[i] + sch < 'A') res += str[i] + sch + 26;
            else if (str[i] + sch > 'Z') res += str[i] + sch - 26;
            else res += str[i] + sch;
        }
        else res += str[i];
        i += 1;
    }
    return res;
}
