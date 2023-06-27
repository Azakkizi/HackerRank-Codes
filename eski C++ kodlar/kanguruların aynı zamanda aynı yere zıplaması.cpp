#include <bits/stdc++.h>

using namespace std;

int main() {
    int k1, k2, z1, z2;
    cin >> k1 >> z1 >> k2 >> z2;
    
    if (k1>=k2 && z1>=z2){
        cout << "NO" ;
    }
    if (k2>=k1 && z2>=z1) {
        cout << "NO" ;
    }
    else if ((k1-k2)%(z2-z1) == 0) {
        cout << "YES" ;
    }
    else {
        cout << "NO" ;
    }       
}