#include <bits/stdc++.h>
using namespace std;

string timeInWords(int h, int m) {
    string sayilar[30]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};
    string dakika;
    string saat;
    if (m==0) {
        dakika=sayilar[h];
        sayilar[h]=" o' clock";
    }
    else if (m<30 && m!=0) {
        dakika=sayilar[m]+" minutes past ";
        if(m==1) {
            dakika="one minute past ";
        }
        if(m==15) {
            dakika="quarter past ";
        }
    }
    else if (m==30) {
        dakika="half past ";
    }
    else if (m>30) {
        m=60-m;
        dakika=sayilar[m]+" minutes to ";
        sayilar[h]=sayilar[h+1];
        if(m==15) {
            dakika="quarter to ";
        }
    }
    return dakika+sayilar[h];
}