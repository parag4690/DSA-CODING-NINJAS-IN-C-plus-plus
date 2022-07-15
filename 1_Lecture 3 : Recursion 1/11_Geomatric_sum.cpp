double geometricSum(int k) {
    // Write your code here
    static float sum = 0;
 if(k<0){
     return sum;
 }
 else{
     sum=sum+1/(pow(2 , k));
     k=k-1;
     return geometricSum(k);
 }

}


