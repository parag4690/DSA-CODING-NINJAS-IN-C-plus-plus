#include <math.h>
int stringToNumber(char input[]) {
    // Write your code here
    static int j;
    for(j=0; input[j]!='\0'; j++);
    static int i=0,sum=0;
    if(i==j){
        return sum;
    }
    else{
       int b = input[i]-48; // converting ascii to int
       sum=sum+b*pow(10,j-1-i);
       i=i+1;
       return stringToNumber(input);
    }
}


