vector<int> icecreamParlor(int m, vector<int> arr) {
    vector<int> sonuc;
    for(int i=0; i<arr.size()-1; i++) {
        for (int j=i+1; j<arr.size(); j++) {
            if(arr[i]+arr[j]==m) {
                sonuc.push_back(i+1);
                sonuc.push_back(j+1);
            }
        }
    }
    return sonuc;
}