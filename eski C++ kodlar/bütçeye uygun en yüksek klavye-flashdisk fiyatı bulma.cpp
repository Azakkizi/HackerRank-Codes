#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int n = keyboards.size();
    int m = drives.size();
    cin >> b >> n >> m;
    for (int i=0; i<n; i++) { // keyboards girdileri
        cin >> keyboards[i];
    }
    for (int i=0; i<m; i++) { //drives girdileri
        cin >> drives[i];
    }
    for (int i=0; i<n-1; i++) { // keyboards buyuk->kucuk siralama
        for (int j=0; j<n-1; j++) {
            if (keyboards[j]<keyboards[j+1]) {
                int temp;
                temp=keyboards[j];
                keyboards[j]=keyboards[j+1];
                keyboards[j+1]=temp;
            }
        }
    }
    for(int i=0; i<m-1; i++) { //drives kucuk->buyuk siralama
        for(int j=0; j<m-1; j++) { 
            if(drives[j]>drives[j+1]) {
                int temp;
                temp=drives[j]; 
                drives[j]=drives[j+1]; 
                drives[j+1]=temp; 
            }
        }
    }
    int max=-1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (keyboards[i] + drives[j] > b) {
                break;
            }
            if (keyboards[i] + drives[j] > max) {
                max = keyboards[i] + drives[j];
            }
        }
    }
    return max;
}