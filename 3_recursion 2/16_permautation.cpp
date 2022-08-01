#include <iostream>
#include <string>
using namespace std;

void prem(string s , int k){
    static int A[10];
    static char res[10];
    if(s[k]=='\0'){
        res[k]='\0';
        cout<<res<<endl;
    }
    else{
        for(int i=0; s[i]!='\0'; i++){
            if(A[i]==0){
                res[k]=s[i];
                A[i]=1;
                prem(s , k+1);
                // return 
                A[i]=0;
            }
        }
    }

}

void printPermutations(string input){

    
    prem(input , 0);
    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
}
