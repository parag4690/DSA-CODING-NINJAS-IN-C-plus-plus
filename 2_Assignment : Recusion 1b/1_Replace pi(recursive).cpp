

void replacePi(char input[]) {
	// Write your code here
    static int j=0,c=0;
    
    for(j=0; input[j]!='\0'; j++);
    
    static int n=j-1,i=0;

    if(input[0]=='\0' || input[i+1]=='\0'){
        return;
    }
    else{
        if(input[i]=='p' && input[i+1]=='i'){
            // shift the character to right side;
             input[i]='3';
            input[i+1]='.';
            int k,l;
            for( k=n; k>=i+2; k--){
                input[k+1]=input[k];
            }
           
            input[i+2]='1';

            n=n+1;
            for(l=n; l>=i+3; l--){
                input[l+1]=input[l];
            }


            input[i+3]='4';
            n=n+1;
        }
        i=i+1;
        c++;
        replacePi(input);
    }
}

