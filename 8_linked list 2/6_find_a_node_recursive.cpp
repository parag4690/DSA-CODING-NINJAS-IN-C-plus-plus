

int findNodeRec(Node *head, int n)
{    
	//Write your code here
    
    // base 1
    if(head==NULL){
        return -1;
    }
    // base 2
    if(head->data == n){
        return 0;
    }
    else{
        int x = findNodeRec(head->next , n);
        if(x==-1){
            return x;
        }
        else{
            return x+1;
        }
    }
}