
Node* deleteNodeRec(Node *head, int i) {
  
    if(head==NULL ||i<0)
        return head;
    if(i==0)
    {
        Node *p=head;
        head=p->next;
        delete p;
        return head;
    }
    Node *x=deleteNodeRec(head->next,i-1);
    head->next=x;
    x=head;
    return head;
}