#include <bits/stdc++.h>
#include <cmath>
#include <string>
using namespace std;

int beautifulDays(int i, int j, int k) {
    int sayac=0;
    for (int a=i; a<=j; a++) {
        string sayi=to_string(a);
        int s=sayi.size();
        for(int t=0; t<s/2; t++) {
            int temp = sayi[t];
            sayi[t]=sayi[sayi.size()-t-1];
            sayi[sayi.size()-t-1]=temp;
        }
        int ters=stoi(sayi);
        if (abs(a-ters)%k==0) {
            sayac++;
        }
    }
    return sayac;
}