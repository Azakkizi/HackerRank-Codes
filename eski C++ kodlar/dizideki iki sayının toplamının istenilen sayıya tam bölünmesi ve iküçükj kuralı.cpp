#include <bits/stdc++.h>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int sayac=0;
    cin >> n >> k;
    for (int i=0; i<n; i++) {
        cin >> ar[i];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if((ar[i]+ar[j])%k==0 && i<j) {
                sayac++;
            }
        }
    }
    return sayac;
}