#include <bits/stdc++.h>
int maximumProfit(int budget[], int n) {
    // Write your code here
    int max = INT_MIN;
    sort(budget , budget + n );
   for(int i=0; i<n; i++){
       budget[i]=budget[i]*(n-i);
       if(budget[i]>=max)
           max=budget[i];
   }
   return max;
}
