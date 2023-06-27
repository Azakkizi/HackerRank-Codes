#include <bits/stdc++.h>
using namespace std;

string angryProfessor(int k, vector<int> a) {
    int sayac=0;
    for (int i=0; i<a.size(); i++) {
        if (a[i]<=0) {
            sayac++;
        }
    }
    if (sayac>=k) {
        return "NO";
    }
    else {
        return "YES";
    }
}