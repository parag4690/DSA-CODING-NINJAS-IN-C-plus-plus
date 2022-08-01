#include <string.h>
using namespace std;


void help(string input,string output)
{
    if(input.size()==0)
    {
        cout<<output<<endl;
        return;
    }
    
    char c1=(input[0]-'0')+96;
    help(input.substr(1),output +c1);
    
    int d =(input[0]-'0')*10 +(input[1]-'0');
    if( d>=10 && d<=26)
    {   char c2= d+96;
        help(input.substr(2),output +c2);
    }
}


void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    string output="";
    
    help(input,output);
}