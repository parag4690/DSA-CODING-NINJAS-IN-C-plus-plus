#include <queue>
#include <stack>
void reverseQueue(queue<int> &input) {
	// Write your code here
//     stack<int> s;
//     int x;
//     while(!input.empty()){
//         x=input.front();
//         s.push(x);
//         input.pop();
//     }
    
//     while(!s.empty()){
//         int x = s.top();
//         input.push(x);
//         s.pop();
//     }
    
    // using recursion
    int x;
    if(input.size()<=0){
        return ;
    }
    else{
      int x ;
      x=input.front();
      input.pop();
      reverseQueue(input);
      
      input.push(x);
    }
   
    
}