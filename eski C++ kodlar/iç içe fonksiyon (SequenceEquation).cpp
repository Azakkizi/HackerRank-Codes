#include <bits/stdc++.h>
using namespace std;

vector<int> permutationEquation(vector<int> p) {
    vector <int> r(p.size());
    for (int i=0; i<p.size(); i++) {
        for (int j=1; j<=p.size(); j++) {
            if(p[p[j-1]-1]==i+1) {
                r.push_back(j);
            }
        }
    }
    r.erase(r.begin(), r.begin()+r.size()/2);
    return r;
}