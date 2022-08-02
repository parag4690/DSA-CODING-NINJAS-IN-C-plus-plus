
Node *reverseLinkedList(Node *head) {
    // Write your code here
    
    Node *p = head , *q = NULL , *r = NULL;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next = r;
    }
    head = q;
    
    return head;
    
    
}