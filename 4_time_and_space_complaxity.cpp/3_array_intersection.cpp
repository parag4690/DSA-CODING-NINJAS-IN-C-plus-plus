
void intersection(int *arr1, int *arr2, int n, int m) 
{
    //Write your code here
    int i=0  , k=0;
    
    vector<int> v;
    while(i<n){
        for(int j=0; j<m ; j++){
          if(arr2[j]!=-1){
            if(arr1[i]==arr2[j]){
                v.push_back(arr1[i]);
                arr2[j]=-1;
            break;
            }
          }
        }
        i++;
    }
    
    sort(v.begin() , v.end());
    for(int i=0; i<v.size(); i++ ){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}