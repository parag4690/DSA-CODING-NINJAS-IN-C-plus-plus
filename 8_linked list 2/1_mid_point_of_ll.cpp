int length(Node *head){
    int c=0;
    while(head){
        c++;
        head=head->next;
    }
    return c;
}

Node *midPoint(Node *head)
{
    int n = length(head);
    Node *p=head;
    if(n%2==0){
        for(int i=0; i<(n/2)-1; i++){
            p=p->next;
        }
        return p;
    }
    else{
        for(int i=0; i<(n/2); i++){
            p=p->next;
        }
        return p;
    }
    // Write your code here
}