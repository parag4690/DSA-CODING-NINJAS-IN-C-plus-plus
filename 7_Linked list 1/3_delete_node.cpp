
int length(Node *head) {
   
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}
Node* deleteNode(Node *head, int i) {
   
    Node *p=head;
    Node *q=NULL;
    
    if(i<0||i>=length(head))
    {   
     // if size is more than 
    }
    else if(i==0)
    {
        head=p->next;
        delete p;
    }
    else
    {
        for(int j=0;j<i&&p!=NULL;j++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        delete p;
    }
    return head;
}