#include <bits/stdc++.h>
#include <cmath>

using namespace std;

string catAndMouse(int x, int y, int z) {
    return (abs(x - z) < abs(y - z)) ? "Cat A" : (abs(x - z) > abs(y - z)) ? "Cat B" : "Mouse C";
}