
void printReverse(Node *head)
{
    //Write your code here
    Node *p=head , *r = NULL , *q = NULL;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next = r;
    }
    head = q;
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}