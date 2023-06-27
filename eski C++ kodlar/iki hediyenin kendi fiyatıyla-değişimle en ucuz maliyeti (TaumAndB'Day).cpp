#include <bits/stdc++.h>
using namespace std;

long taumBday(long b, long w, long bc, long wc, long z) {
    long t1=b*bc+w*wc;
    long t2=b*bc+w*(bc+z);
    long t3=b*(wc+z)+w*wc;
    long min=t1;
    if(t2<t1 && t2<t3) {
        min=t2;
    }
    else if(t3<t1 && t3<t2) {
        min=t3;
    }
    return min;
}