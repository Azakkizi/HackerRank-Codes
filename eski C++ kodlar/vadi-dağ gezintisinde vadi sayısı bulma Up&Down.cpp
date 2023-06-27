#include <bits/stdc++.h>
using namespace std;

int countingValleys(int n, string s) {
    for (int i=1;i<n; i++) {
        cin >> s[i];
    }
    int denizSeviyesi, vadi;
    denizSeviyesi=0;
    vadi=0;
    for (int i=0; i<n; i++) {
        if (s[i]=='D') {
            denizSeviyesi--;
        }
        if (s[i]=='U') {
            denizSeviyesi++;
            if(denizSeviyesi==0) {
                vadi++;
            }
        }
    }
    return vadi;
}