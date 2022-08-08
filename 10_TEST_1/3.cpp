bool check(int *input , int size , int index , int lsum , int rsum){
    if(index == size){
        return lsum == rsum;
    }
    if(input[index] % 5 == 0){
        lsum +=input[index];
    }
    else if(input[index]%3==0){
        rsum+=input[index];
    }
    else{
        bool leftAns=check(input , size , index+1 , lsum+input[index], rsum );
        bool rightAns = check(input , size , index+1 , lsum , rsum+input[index]);
        
        return leftAns || rightAns;
    }
    return check(input , size , index+1 , lsum , rsum);
}
bool splitArray(int *input , int size){
    return check(input , size , 0 , 0 , 0);
}
