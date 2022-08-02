


int length(Node *head) {
   
    int count=0;
    while(head)
    {
        count++;
        head=head->next;
    }
    return count;
}

Node *reverse(Node*head2)
{
    Node *p=head2,*q=NULL,*r=NULL;
    while(p)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head2=q;
    return q;
}

bool  isPalindrome(Node* head)
{
    //write your code here
    if(head==NULL || head->next == NULL){
        return true;
    }
    Node *p=head;
    int len=length(head)/2;
    
    for(int i=0;i<len-1;i++)
    {   
        p=p->next;
                
    }
    Node *head2=p->next;
    
    p->next=NULL;
   head2= reverse(head2);
   
    while(head!=NULL && head2!=NULL)
    {
        if(head->data!=head2->data)
            return false;
        head=head->next;
        head2=head2->next;
    }
    return true;
}
