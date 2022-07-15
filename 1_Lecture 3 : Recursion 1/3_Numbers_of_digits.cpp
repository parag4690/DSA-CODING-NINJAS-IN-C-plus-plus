

int count(int n){
    //write your code here
   if(n>0){
        return count(n/10)+1;
    }
    return 0;
   
}


