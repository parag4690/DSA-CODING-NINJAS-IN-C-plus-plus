// input - input array
// size - length of input array
// element - value to be searched

int search(int input[] , int l , int h , int element){
    
    int mid;
    if(l>h){
        return -1;
    }
    else{
        mid = (l+h)/2;
        if(element == input[mid]){
            return mid;
        }
        else if(element > input[mid]){
            return  search(input , mid+1 , h , element);
        }
        else{
           return  search(input , l , mid-1 , element);
        }
    }
    
}
int binarySearch(int input[], int size, int element) {
    // Write your code here
    
    search(input , 0 , size-1 , element);

}
