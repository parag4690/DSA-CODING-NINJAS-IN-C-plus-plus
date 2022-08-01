void rotate(int *arr, int d, int n)
{
    //Write your code here
    int temp[n];
    // storing n-d elements
    
    int k=0;
    
    for(int i=d; i<n; i++){
        temp[k++]=arr[i];
    }
    
    // for d 
    
    for(int i=0; i<d; i++){
        temp[k++]=arr[i];
    }
    
    // copy the rest of elements
    
    for(int i=0; i<n; i++){
        arr[i]=temp[i];
    }
    
    
}