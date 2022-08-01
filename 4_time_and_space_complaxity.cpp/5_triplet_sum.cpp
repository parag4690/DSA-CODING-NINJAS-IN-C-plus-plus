int tripletSum(int *A, int n, int X)
{
	//Write your code here
     int count=0;
    sort(A , A+n);
      for(int i = 0; i < n; i++){
            int y = X - A[i];
            int low = i+1, high = n-1;
            while (low < high){
                if(A[low] + A[high] == y){
                    count++;
                    low++;
                    high--;
                }
                else if(A[low] + A[high] > y){
                    high--;
                }
                
                else if(A[low] + A[high] < y){
                    low++;
                }
                
            }
        
        }
    return count;
}