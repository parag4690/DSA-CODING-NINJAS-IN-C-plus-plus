
int length(Node *head)
{
    static int i=0;
    if(head!=NULL){
        i++;
        length(head->next);
    }
    return i;
    //Write your code here
}
