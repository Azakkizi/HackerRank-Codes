#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> ar[n];
    for (int i=0; i<n; i++) {
        cin >> ar[i];
    }
    int sayac = 0;
    int a=0;
    for (int i=0; i<n-1; i++) {
        for (int j=n-1; j>0; j--) {
            if (ar[i] == ar[j]) {
                if (i==j) {
                    break;
                }
                //cout << ar[i] << i << ' ' << ar[j]<< j << endl;
                ar[i] = a;
                ar[j] = a;
                a--;
                sayac++;
                //cout << sayac << ' ' << ar[i] << ' ' << ar[j] << endl;
                //break;
            }
        }
    }
}