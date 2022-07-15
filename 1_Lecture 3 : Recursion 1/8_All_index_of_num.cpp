
int allIndexes(int input[], int size, int x, int output[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
    
   static int i=0,j=0;
   if(i==size){
       return j;
   }
   else{
       if(input[i]==x){
           output[j]=i;
           j=j+1;
       }
       i=i+1;
      return allIndexes(input , size , x , output);
      
   }

}
