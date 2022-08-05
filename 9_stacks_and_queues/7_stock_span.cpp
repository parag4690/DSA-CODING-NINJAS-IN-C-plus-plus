#include <bits/stdc++.h>
int* stockSpan(int *price, int size)  {
	// Write your code here
    int *a = new int[size];
    
    int x=INT_MIN , y=0,z; // 5 3 4 8
    a[0] = 1;
    for(int i=0; i<size ; i++){

             int k=i-1;
             while(price[k]<price[i] && k>=0){ 
                 y++;
                 k--;
             }
            
             a[i]=y+1;
             y=0;
    }
 
    return  a;
}