#include <bits/stdc++.h>
using namespace std;

int utopianTree(int n) {
    int boy=1;
    for (int j=1; j<=n; j++) {
        if (j%2==1) {
            boy*=2;
        }
        if (j%2==0) {
            boy++;
        }
    }
    return boy;
}