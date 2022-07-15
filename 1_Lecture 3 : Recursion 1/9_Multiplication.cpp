int multiplyNumbers(int m, int n) {
    // Write your code here
    // return m*n;
    // by recursion
    
    static int i=0;
    static int s = 1;
    int k = m;
    if(i==1){
        k=n;
    }
    if(i==2){

        return s;
    }
    else{
        
        s=s*k;
        i=i+1;
       return multiplyNumbers(m,n);
    }
}


