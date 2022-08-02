int count(Node *head){
    int c=0;
    while(head!=NULL){
        c++;
        head =head->next;
    }
    return c;
}

Node* insertNode(Node *head, int i, int data) {
	// Write your code here
    Node *s = head;
    Node *t = new Node(data);
    t->data= data;
    
    if(i<0 || i>count(head)){
        
    }
    else if(i==0){
        t->next = head;
        head = t;
    }
    else{
        Node *p=head;
        for(int j=0; j<i-1; j++){
            p=p->next;
        }
        t->next=p->next;
        p->next = t;
        
        
    }
    
    return head;
}
