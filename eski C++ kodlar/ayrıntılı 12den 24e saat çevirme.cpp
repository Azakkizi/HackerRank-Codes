#include <bits/stdc++.h>

using namespace std;

int main () {

    char saat[11];

    for (int i=0; i<10; i++) {
        cin >> saat[i];
    }

    if (saat[8] == 'P') {
    saat[0] += 1;
    saat[1] += 2;
        if(saat[1] > '9') {
            saat[0] +=1;
            saat[1] -=10;
        }
        if(saat[0] == '2' && saat[1] == '4') {
            saat[0] = '1';
            saat[1] = '2';
        }
    }

    if (saat[8] == 'A') {
        if (saat[0] == '1' || saat[1] == '2') {
            saat[0]= '0' ;
            saat[1]= '0'; }
    }

    for (int i=0; i<8; i++){
        cout << saat[i];
    }
    
}