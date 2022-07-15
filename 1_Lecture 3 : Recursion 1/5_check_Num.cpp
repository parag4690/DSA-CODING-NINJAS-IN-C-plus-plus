

bool checkNumber(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

     static int i=0;
   if(i==size){
       return false;
   }
   else{
       if(input[i]==x){
           return true;
       }
       i=i+1;
      return checkNumber(input , size , x);
      
   }
}




