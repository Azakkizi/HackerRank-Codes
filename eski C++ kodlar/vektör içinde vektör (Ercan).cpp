#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int diziSayisi, sorguSayisi;
    cin >> diziSayisi >> sorguSayisi;
    int ds = diziSayisi;
    int ss = sorguSayisi;
    vector <vector<int>> d(ds);
    vector <vector<int>> s(ss);

    for (int i = 0; i < ds; i++) {
        int elemanSayisi;
        cin >> elemanSayisi; // i. vektörün eleman sayısı
        vector<int> di(elemanSayisi); //iç vektörün initialize olması
        d[i] = di; //iç vektörün setlenmesi
        for (int j = 0; j < elemanSayisi; j++) {
            cin >> d[i][j];
        }
    }
    for (int i = 0; i < ss; i++) {
        vector<int> si(2); //iç vektörün initialize olması
        s[i] = si; //iç vektörün setlenmesi
        for (int j = 0; j < 2; j++) {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < ss; i++) {
        cout << d[s[i][0]][s[i][1]] << endl;
    }
    return 0;
}