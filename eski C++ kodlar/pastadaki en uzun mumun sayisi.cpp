#include <bits/stdc++.h>

using namespace std;

int main() {

    int mumSayisi;
    cin >> mumSayisi;
    int sayac = 0;
    vector <int> mumBoylari(mumSayisi);

    for (int i=0; i<mumSayisi; i++) {
        cin >> mumBoylari[i];
    }

    int enUzun = mumBoylari[0];
    
    for (int i=0; i<mumSayisi; i++){
        if (mumBoylari[i] >= enUzun)
        enUzun = mumBoylari[i];
    }
    for (int i=0; i<mumSayisi; i++){
        if (mumBoylari[i] == enUzun)
        sayac++;
    }
    cout << sayac;
}