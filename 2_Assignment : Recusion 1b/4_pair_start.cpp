// Change in the given string itself. So no need to return or print the changed string.

void pairStar(char input[]) {
    // Write your code here
    static int j;
    for(j=0; j<input[j]!='\0'; j++);
    // cout<<j<<endl;
    static int i=0;
    if(i==j){
        return ;
    }
    else{
        if(input[i]==input[i+1]){
            for(int k=j; k>=i+1; k--){
                input[k+1]=input[k];
            }
            input[i+1]='*';
            j=j+1;
        }
        i=i+1;
        pairStar(input);
        
    }
}
