void reverse(Node *&head){ // work like double pointer
    Node *p = head , *q = NULL , *r = NULL;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next = r;
        
    }
    head = q;
}

void change(Node *&head){
    reverse(head);

    Node *t= head;
    while(t->data==9 && t->next!=NULL){
       t->data = 0;
       t=t->next;
    }
    t->data += 1;
    Node *s = head , *w = NULL , *h=NULL;
    reverse(head); 
}
Node* NextLargeNumber(Node *head) {
  Node *p = head , *q = head;
  if(head->next ==NULL){
      head->data+=1;
      return head;
  }
  while(p->next!=NULL){
      p=p->next;
  }
  if(p->data !=9){
      p->data+=1;
  }
  else{
      change(head);
  }
  if(head->data>9){
      head->data=1;
      Node *t = new Node(0);
      t->next = head->next;
      head->next=t;
  }
  return head;
}
