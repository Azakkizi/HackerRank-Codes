#include <bits/stdc++.h>
using namespace std;

int birthday(vector<int> s, int d, int m) {
    int kareSayisi = s.size();
    cin >> kareSayisi;
    for (int i=0; i<kareSayisi; i++) {
        cin >> s[i];
    }
    cin >> d >> m;
    int toplam=0;
    int sayac=0;
    for (int i=0; i<=kareSayisi-m; i++) {
        for (int j=1; j<=m; j++) {
            toplam += s[i+j-1];
        }
        if (toplam == d) {
                sayac++;
        }
        toplam=0;
    }
    return sayac;
}