int getSecondLargest(vector<int> &arr) {
        int max= INT_MIN;
        int max2 = INT_MIN;
        int n = arr.size();
        if(n<2) return -1;
        
        for (int i=0;i<n;i++){
            if(arr[i]>max){
                max2 = max;
                max=arr[i];
            } 
            else if(arr[i]>max2 && arr[i]!=max) max2 = arr[i];
        }
    return max2;
    }