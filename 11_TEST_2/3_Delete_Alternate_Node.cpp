
void deleteAlternateNodes(Node *head) {
    if(head==0 || head->next == 0)
        return ;
    Node *p = head ;
    while(p!=NULL){
       p->next = p->next->next;
        p=p->next;
    }
}