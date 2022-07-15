
int countZeros(int n) {
    // Write your code here
    static int i=0,c=0;
    
    if(c==0 && n==0){
        return 1;
    }
    if(n==0){
        return i;
    }
    else{
       c++;
       int rem = n%10;
       if(rem == 0){
           i=i+1;
       } 
       return countZeros(n/10);
    }
}


