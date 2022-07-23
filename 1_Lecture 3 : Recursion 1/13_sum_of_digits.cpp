int sumOfDigits(int n) {
    // Write your code here

    
    static int sum =0;
    if(n==0){
       return sum;
    }
    else{
        int rem = n%10;
        sum+=rem;
        return sumOfDigits(n/10);
    }
}


