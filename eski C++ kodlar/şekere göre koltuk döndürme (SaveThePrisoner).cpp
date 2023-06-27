#include <bits/stdc++.h>
using namespace std;

int saveThePrisoner(int n, int m, int s) {
    int koltuk;
    koltuk = (m+s-1)%n;
    if (koltuk==0) {
        koltuk=n;
    }
    return koltuk;
}