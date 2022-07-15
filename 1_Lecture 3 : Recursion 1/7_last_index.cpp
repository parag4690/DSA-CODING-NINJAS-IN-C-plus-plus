int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
static int i=size-1;
   if(i<0){
       return -1;
   }
   else{
       if(input[i]==x){
           return i;
       }
       i=i-1;
      return lastIndex(input , size , x);
      
   }

}
