
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
   // for first element
    // Node *head3=new Node(data);
    Node *p = head1 , *q = head2 , *last;
    
    if(head1==NULL && head2!=NULL){
        return head2;
    }
    else if(head1!=NULL && head2==NULL){
        return head1;
    }
    else if(head1==NULL && head2==NULL){
        return head1;
    }
    
    Node *head3;
    if(p->data<q->data){
        head3=p;
        last=p;
        p=p->next;
        head3->next = NULL;
    }
    else{
        head3=q;
        last = q;
        q=q->next;
        head3->next = NULL;
    }
    while(p && q){
        if(p->data<q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next = NULL;
        }
        else{
            last->next = q;
            last=q;
            q=q->next;
            last->next = NULL;
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