#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED


#include <iostream>
#include <string>

using namespace std;


string itc_toString(long long num);
long long itc_bin_num(long long number);
long long itc_abs(long long num);
double itc_pow(long long num, long long n);
long long itc_len(string str);
bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(string s1, string s2);
string itc_slice_str(string str, int n, int k);
int itc_countWords(string str);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string s1, string s2);
string itc_Cezar(string str, int sch);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str);
string itc_DecToBin(string str);
string itc_decToBase(int num, int base);

#endif // MIDDLE_STR_H_INCLUDED
