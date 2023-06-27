#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int a; double b; string c;
    cin >> a >> b;
    cin.ignore();
    getline(cin,c);
    cout << a+i << endl <<fixed<<setprecision(1)<< b+d << endl << s+c;
    return 0;
}