#include <string>
using namespace std;

int keypad(int num, string output[]){
   string ans;
   if(num==0){
       output[0]="";
       return 1;
   }

   int n = num%10; 
   num = num/10;

   int smallOutputSize = keypad(num , output);

   switch(n){
      case 2 : ans = "abc";
        break;
      case 3 : ans = "def";
        break;
      case 4 : ans = "ghi";
        break;
      case 5 : ans = "jkl";
        break;
      case 6 : ans = "mno";
        break;
      case 7 : ans = "pqrs";
        break;
      case 8 : ans = "tuv";
        break;
      case 9 : ans = "wxyz";
        break;
   }

    int ans_size=smallOutputSize*(ans.size());
    string temp[ans_size];
    int k=0;
    for(int i=0; i<smallOutputSize; i++){
        for(int j=0; j<ans.size(); j++){
            temp[k] = output[i]+ans[j];
            k++;
        }
        
    }
    for(int i=0; i<ans_size; i++){
        output[i] = temp[i];
    }
    return ans.size()*smallOutputSize;
}
