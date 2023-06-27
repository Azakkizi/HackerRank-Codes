#include <bits/stdc++.h>
using namespace std;

int main() {

    int ogrenciSayisi;
    cin >> ogrenciSayisi;
    vector <int> notlar(ogrenciSayisi);

    for (int i=0; i<ogrenciSayisi; i++) {
        cin >> notlar[i];
    }
    for (int i=0; i<ogrenciSayisi; i++) {
        if (notlar[i] >= 38 && notlar[i]%5 >= 3 && notlar[i]%5 != 0) {
            notlar[i] +=  5 - notlar[i]%5 ;
        }
    }
    for (int i=0; i<ogrenciSayisi; i++) {
        cout << notlar[i] << endl; }
}