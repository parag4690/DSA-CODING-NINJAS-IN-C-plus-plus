#include <stack>
int countBracketReversals(string input) {
	// Write your code here
     int c = 0 , c1=0;
    stack<char> s;
    for(int i=0; input[i]!='\0'; i++ ){
        if(input[i]=='{'){
            s.push(input[i]);
        }
        else if(input[i]=='}'){
            if(s.empty())
                c1++;
            else
            s.pop();
            
        }
    }
    while(!s.empty()){
        if(s.top()=='{'){
          
            c++;
        }
        s.pop();
    }

    if((c+c1)%2==0){
        if(c==c1){
            return ((c+c1)/2)+1;
        }
        return (c+c1)/2;
    }
    return -1;
}