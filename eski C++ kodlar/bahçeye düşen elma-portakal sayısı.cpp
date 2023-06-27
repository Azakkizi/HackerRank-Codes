#include <bits/stdc++.h>

using namespace std;

int main() {

    int elmaX, portakalX, elmaSayisi, portakalSayisi, duvarA, duvarB, sayacElma=0, sayacPortakal=0;
    cin >> duvarA >> duvarB;
    cin >> elmaX >> portakalX;
    cin >> elmaSayisi >> portakalSayisi;
    vector <int> dusenElma(elmaSayisi);
    vector <int> dusenPortakal(portakalSayisi);

    for (int i=0; i<elmaSayisi; i++){
        cin >> dusenElma[i];
        if (duvarA <= (dusenElma[i]+elmaX) && (dusenElma[i]+elmaX) <= duvarB) {
            sayacElma++;
        }
    }
    for (int i=0; i<portakalSayisi; i++){
        cin>> dusenPortakal[i];
        if (duvarA <= (dusenPortakal[i]+portakalX) && (dusenPortakal[i]+portakalX) <= duvarB) {
            sayacPortakal++;
        }
    }
    cout << sayacElma << endl << sayacPortakal;
}
