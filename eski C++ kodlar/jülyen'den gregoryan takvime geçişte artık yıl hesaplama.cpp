#include <bits/stdc++.h>

using namespace std;

int main () {
    int year;
    cin >> year;
    if (year == 1918) {
        cout << "26.09.1918";
    }
    else if ((year < 1918 && year%4 == 0) || (year > 1918 && (year%4 == 0 && year%100 != 0 || year%400 == 0))) { //artık yıl
        cout << "12.09." << year;
    }
    else {
        cout << "13.09." << year;
    }
}