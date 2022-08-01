int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    int count=0;
    for(int i=size-1; i>=0; i--){
        if(input[i]<input[i-1]){
            count++;
            break;
        }
        else{
            count++;
        }
            
    }
    
    return size-count;
}