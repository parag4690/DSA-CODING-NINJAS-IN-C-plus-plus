int findNode(Node *head, int n){
    // Write your code here.
    int i=0;
    while(head!=NULL){
        if(head->data == n){
            return i;
        }
        i++;
        head=head->next;
    }
    return -1;
}