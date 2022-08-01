void swap(int *x , int *y){
    int temp = *x ;
    *x = *y ;
    *y = temp;
}




int partition(int input[] , int l , int h){
    int pivot = input[l];
    int i=l , j = h;
    do{
        do{
            i++;
        }while(input[i]<=pivot);
        do{
            j--;
        }while(input[j]>pivot);
        
        if(i<j){
            swap(&input[i] , &input[j]);
        }
    }while(i<j);
    
    swap(&input[l] , &input[j]);
    
    return j;
}


void QuickSort(int input[] , int l  , int h ){
    int j;
    if(l<h){
        j = partition(input  , l , h);
        QuickSort(input , l , j);
        QuickSort(input , j+1 , h);
    }
}
void quickSort(int input[], int size) {
 
    QuickSort(input , 0 , size);

}