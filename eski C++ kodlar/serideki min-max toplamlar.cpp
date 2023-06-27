#include <bits/stdc++.h>

using namespace std;

int main () {
    long sayilar[5];
    long tumToplam=0;
    
    for (int i=0; i < 5; i++)
        cin >> sayilar[i];

    long enBuyuk=sayilar[0];
    long enKucuk=sayilar[0];

    for (int i=0; i < 5; i++) {
        if (sayilar[i] >= enBuyuk)
        enBuyuk = sayilar[i];
        if (sayilar[i] <= enKucuk)
        enKucuk = sayilar[i];
    }
    for (int i=0; i < 5; i++) {
        tumToplam += sayilar[i]; 
    }
    cout << tumToplam - enBuyuk << ' ' << tumToplam - enKucuk;
}