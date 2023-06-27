int minimumAbsoluteDifference(vector<int> arr) {
    long fark = 4294967294;
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size()-1; i++) {
        if(abs(arr[i]-arr[i+1])<=fark) {
            fark=abs(arr[i]-arr[i+1]);
        }
    }
    return fark;
}