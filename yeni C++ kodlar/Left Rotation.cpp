vector<int> rotateLeft(int d, vector<int> arr) {
    for(int i=0; i<d; i++) {
        int temp=arr[0];
        for (int j=0; j<arr.size()-1; j++) {
            arr[j]=arr[j+1];            
        }
        arr[arr.size()-1]=temp;
    }
    return arr;
}