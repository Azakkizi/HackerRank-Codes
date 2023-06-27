#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int minimumDistances(vector<int> a) {
    vector<int> sonuc;
    for (int i=0; i<a.size(); i++) {
        for (int j=0; j<a.size(); j++) {
            if (a[i]==a[j] && i!=j) {
                sonuc.push_back(abs(j-i));
            }
        }
    }
    int min=1000;
    for (int i=0; i<sonuc.size(); i++) {
        if (sonuc[i]<min) {
            min=sonuc[i];
        }
    }
    if (sonuc.size()!=NULL) {
        return min;
    }
    else {
        return -1;
    }
}