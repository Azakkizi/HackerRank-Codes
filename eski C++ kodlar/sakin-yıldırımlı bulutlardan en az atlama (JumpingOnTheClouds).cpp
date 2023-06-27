#include <bits/stdc++.h>
using namespace std;

int jumpingOnClouds(vector<int> c) {
    int sayac=0;
    for (long unsigned int i=0; i<c.size(); i++) {
        if (c[i]==0) {
            sayac++;
        }
    }
    for (long unsigned int i=0; i<c.size()-2; i++) {
        if (c[i]==0&&c[i+1]==0&&c[i+2]==0) {
            sayac--;
            i++;
        }
    }
    return sayac-1;
}