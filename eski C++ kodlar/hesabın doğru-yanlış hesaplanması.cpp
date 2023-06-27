#include <bits/stdc++.h>

using namespace std;

int main () {
    int k, b;
    int n, brian;
    cin >> n >> k;
    int bill[n];
    for (int i=0; i<n; i++) {
        cin >> bill[i];
    }
    cin >> brian;
    int toplam=0;
    for (int i=0; i<n; i++) {
        toplam += bill[i];
    }
    toplam = toplam-bill[k];
    int anna;
    anna = toplam/2;    
    if (brian == anna) {
        cout << "Bon Appetit";
    }
    else {
        cout << (brian-anna);
    }
}