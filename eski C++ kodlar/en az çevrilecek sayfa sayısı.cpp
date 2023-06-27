#include <bits/stdc++.h>
using namespace std;

int pageCount(int n, int p) {
    cin >> n >> p;
    int sayfa;
    if (n/2 >= p) {
        sayfa = p/2;
    }
    else {
        if (n%2==0) {
            sayfa = (n-p+1)/2;
        }
        else {
            sayfa = (n-p)/2;
        }
    }
    return sayfa;
}