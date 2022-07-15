
int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    
   static int i=0;
   if(i==n){
       return 0;
   }
   else{
       int x= input[i];
       i=i+1;
       return sum(input , n)+x;
   }

}



