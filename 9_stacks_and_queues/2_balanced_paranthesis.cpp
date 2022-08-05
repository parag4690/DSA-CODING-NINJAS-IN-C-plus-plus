#include <stack>
bool isBalanced(string expression) 
{
    // Write your code here
    stack<char> s;
    for(int i=0; expression[i]!='\0'; i++){
        if(expression[i]=='('){
            s.push(expression[i]);
        }
        if(s.empty() && expression[i]==')')
            return false; // don't give first element 
        
        if(expression[i]==')'){
            if(s.top()=='('){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    return false;
    
}