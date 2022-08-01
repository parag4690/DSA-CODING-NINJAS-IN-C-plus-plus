void merge(int input[] , int l , int mid , int h){
    int i=l , j = mid+1 , k = l;
    int b[h+1];
    while(i<=mid && j<=h){
        if(input[i]<input[j]){
            b[k++]=input[i++];
        }
        else{
            b[k++]=input[j++];
        }
    }
    while(i<=mid){
        b[k++]=input[i++];
    }
    while(j<=h){
        b[k++]=input[j++];
    }
    
    for(int f = l ; f<=h; f++){
        input[f]=b[f];
    }
    
    
    
}


void mergeRecursive(int input[] , int l , int h){
    int mid;
    if(l<h){
        mid = (l+h)/2;
        mergeRecursive(input , l , mid);
        mergeRecursive(input , mid+1 , h);
        merge(input , l , mid , h);
    }
}

void mergeSort(int input[], int size){
	// Write your code here
     mergeRecursive(input , 0 , size-1);        
}
