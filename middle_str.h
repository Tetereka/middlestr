#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED
long long itc_len(string str);
bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_kompare(string s1, string s2);
string itc_slice_str(string str, int n, int k);
int itc_countWords(string str);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string s1, string s2);

#endif // MIDDLE_STR_H_INCLUDED
