#include <bits/stdc++.h>
using namespace std;

int findDigits(int n) {
    int sayac=0;
    int r=n;
    while (r>0) {
        if(r%10 != 0 && n%(r%10)==0) {
            sayac++;
        }
        r=r/10;
    }
    return sayac;
}