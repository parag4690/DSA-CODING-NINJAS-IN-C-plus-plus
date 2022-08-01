int findUnique(int *arr, int n) {
    // Write your code here
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int h[max+1]={0};
    for(int i=0; i<n; i++){
        h[arr[i]]++;
    }
    for(int i=0; i<max+1; i++){
        if(h[i]==1){
            return i;
        }
    }
}