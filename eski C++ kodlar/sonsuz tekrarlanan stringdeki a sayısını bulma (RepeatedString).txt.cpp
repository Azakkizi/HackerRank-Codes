#include <bits/stdc++.h>
using namespace std;

long repeatedString(string s, long n) {
    long sayac=0;
    for (int i=0; i<s.size(); i++) {
        if (s[i]=='a') {
            sayac++;
        }
    }
    sayac=sayac*(n/s.size());
    if (n%s.size()!=0) {
        for (int i=0; i<n%s.size(); i++) {
            if (s[i]=='a') {
                sayac++;
            }
        }
    }
    return sayac;
}