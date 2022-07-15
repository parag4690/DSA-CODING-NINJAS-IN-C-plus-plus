bool checkPalindrome(char input[]) {
    // Write your code here
   static int c = 0,j;
  // length of string
   if(c==0) {
   for( j = 0; input[j] != '\0'; ++j);
   }
    
   static int n = j-1,i=0;
   
   if(n==1){
       return true;
   }
   if(i>=n){
     return true;
   }
   if(input[n]!=input[i]){
      return false;
   }
   else{
       n=n-1;
       i=i+1;
       return checkPalindrome(input);
   }

    
}


