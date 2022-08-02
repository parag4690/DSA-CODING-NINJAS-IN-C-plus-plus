int length(Node *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
void swap( Node *a,  Node *b)
{
	int temp = a->data;
	a->data = b->data;
	b->data = temp;
}

Node *bubbleSort(Node *head)
{
	// Write your code here
    
    Node *h ;
    int i , j , swapped = 1;
    int n = length(head);
    for( i=0; i<n-1; i++){
        h=head;
        swapped = 1;
        for(j =0; j<n-i-1; j++){
            Node *p = h;
            Node *q = p->next;
            if(p->data>q->data){
                swap(p , q); // just swap
                swapped=0;
            }
            h=h->next;
        }
        if(swapped){
            return head;
        }
    }
    return head;
    
}