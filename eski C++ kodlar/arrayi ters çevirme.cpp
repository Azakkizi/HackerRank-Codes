#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, tmp;
    cin >> a;
    vector <int> reverseArray(a);

    for (int i=0; i<a; i++) {
        cin >> reverseArray[i];
    }
    for (int i=0; i<a/2; i++) {
        tmp = reverseArray[i];
        reverseArray[i] = reverseArray [a-i-1];
        reverseArray[a-i-1] = tmp;
    }
    for (int i=0; i<a; i++) {
    cout << reverseArray[i]<< ' ';
    }
}