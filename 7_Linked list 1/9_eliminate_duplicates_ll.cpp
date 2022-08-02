Node*  removeDuplicates(Node* head)
{
    //write your code here
    if(head == NULL||head->next == NULL){
        return head;
    }
    Node *p=head;
    //Node *q=head->next;
    while(p->next != NULL)
    {
       if(p->data==p->next->data)
       {
           p->next = p->next->next;
       }
      else{
        //q=q->next;
        p=p->next;
        }
    }
    return head;
}