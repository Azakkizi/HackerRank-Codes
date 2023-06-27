#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int formingMagicSquare(vector<vector<int>> s) {
    int m[8][3][3]={{{8, 1, 6}, {3, 5, 7}, {4, 9, 2}}, {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}}, {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}}, {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}}, {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}}, {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}};
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cin >> s[i][j];
        }
    }
    int buyukFark=81;
    for (int k=0; k<8; k++) {
        int sonFark=0;
        for (int i=0; i<3; i++) {
            for (int j=0; j<3; j++) {
                sonFark += abs(s[i][j]-m[k][i][j]);
            }
        }
        if (sonFark<buyukFark){
                buyukFark=sonFark;
            }
    }
    return buyukFark;
}