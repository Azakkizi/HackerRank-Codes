#include <bits/stdc++.h>

using namespace std;
int main () {
    float sayiSayisi;
    float sonucPoz;
    float sonucNeg;
    float sonucSif;
    float sayacPoz=0;
    float sayacNeg=0;
    float sayacSif=0;
    cin >> sayiSayisi;
    vector <int> sayilar(sayiSayisi);

    for (int i=0; i<sayiSayisi; i++) {
        cin >> sayilar[i]; }

    for (int i=0; i<sayiSayisi; i++) {
        if (sayilar[i] > 0)
            sayacPoz++;
        if (sayilar[i] < 0)
            sayacNeg++;
        if (sayilar[i] == 0)
            sayacSif++;
    }
    sonucPoz = sayacPoz / sayiSayisi;
    sonucNeg = sayacNeg / sayiSayisi;
    sonucSif = sayacSif / sayiSayisi;
    cout << sonucPoz << endl << sonucNeg << endl << sonucSif;
    return 0;    
}