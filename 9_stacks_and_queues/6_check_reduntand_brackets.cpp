#include <stack>
bool checkRedundantBrackets(string expression) {
	// Write your code here
    stack<char> s;
    for(int i=1; expression[i]!='\0'; i++){
        if(expression[i]=='('){
            
            s.push(expression[i]);
          
            if(expression[i-1]=='(' ){
                return true;
                s.pop();
            }
        }

    }
    if(s.empty()){
       return true;
    }
    return false;
}