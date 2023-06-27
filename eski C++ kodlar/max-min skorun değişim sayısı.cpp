#include <bits/stdc++.h>

using namespace std;

int main () {

    int oyunSayisi, maxScore, minScore, sayacMin, sayacMax;
    cin >> oyunSayisi;
    vector <int> skor(oyunSayisi);
    sayacMin = 0;
    sayacMax = 0;
    
    for (int i=0; i<oyunSayisi; i++) {
        cin >> skor[i];
    }
    maxScore = skor[0];
    minScore = skor[0];

    if (oyunSayisi > 1) {
        if (skor[1]>maxScore) {
            maxScore = skor[1];
            sayacMax++;
        }
        else if (skor[1]<minScore) {
            minScore = skor[1];
            sayacMin++;
        }
        for (int i=2; i<oyunSayisi; i++) {
            if (skor[i]>maxScore) {
                maxScore = skor[i];
                sayacMax++;
            }
            else if (skor[i]<minScore) {
                minScore = skor[i];
                sayacMin++;
            }
        }
    }
    cout << sayacMax << " " << sayacMin;
}