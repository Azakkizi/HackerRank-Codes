#include <bits/stdc++.h>
using namespace std;

int viralAdvertising(int n) {
    int paylasilan=5;
    int toplam, begenen;
    for (int i=1; i<=n; i++) {
        begenen=paylasilan/2;
        paylasilan=begenen*3;
        toplam+=begenen;
    }
    return toplam;
}