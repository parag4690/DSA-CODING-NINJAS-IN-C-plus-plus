int length(Node *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
// merge

Node *mergeTwoSort(Node *head1 , Node *head2){
   Node *p=head1 , *q = head2 , *last;
   Node *head3;
   if(p->data < q->data){
       head3=p;
       p=p->next;
       last = head3;
       last->next = NULL;
   }
    else{
        head3=q;
        q=q->next;
        last = head3;
        last->next = NULL;
    }
    
    while(p && q){
        if(p->data<q->data){
            last->next = p;
            last = p;
            p=p->next;
        }
        else{
            last->next = q;
            last = q;
            q=q->next;
        }
    }
    if(p){
        last->next = p;
    }
    else{
        last->next = q;
    }
    
    return head3;
}


Node *mergeSort(Node *head)
{
    if(head==NULL || head->next == NULL)
        return head;
    Node *p = head;
    int n = length(head);
    
    for(int i=0; i<(n/2)-1; i++){
        p=p->next;
    }
    
    Node *head1 = p->next;
    p->next = NULL;
    
    head = mergeSort(head);
    head1 = mergeSort(head1);
    
    return mergeTwoSort(head , head1);
    
}