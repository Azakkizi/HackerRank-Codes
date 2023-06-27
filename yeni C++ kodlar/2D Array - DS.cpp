int hourglassSum(vector<vector<int>> arr) {
    int total;
    for(int i=0; i<arr.size()-2; i++) {
        for(int j=0; j<arr[i].size()-2; j++) {
            int temp=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(temp>total) {
                total=temp;
            }
        }
    }
    return total;
}