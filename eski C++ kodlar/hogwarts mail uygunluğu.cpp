#include <bits/stdc++.h>

using namespace std;

string isValid(string email) {
    
    string answer;
    if (email.length() != 18) {
        return "No";
    }
    if (email.length() == 18) {
        string domain = email.substr (5,13); //@hogwarts.com
        for (int i=0; i<5; i++) {
            if (email[i]>96 && domain == "@hogwarts.com") {
                return "Yes";
            }
            else {
                return "No";
            }
        }
    }
    return answer;
}

int main() {
    string s;
    cin >> s;
    string result = isValid(s);
    cout << result << endl;
    return 0;
}