
int count(Node *head){
    int c=0;
    while(head!=NULL){
        c++;
        head=head->next;
    }
    return c;
}

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    if(head == NULL||head->next == NULL){
        return head;
    }
    
    Node *p = head , *last=head;
    int x=count(head)-n;
    
    for(int i=0; i<x-1; i++){
        p=p->next;
    }
    while(last->next!=NULL){
        last=last->next;
    }
      last->next = head;
      head=p->next;
      p->next = NULL;
    
      
    return head;
    
}