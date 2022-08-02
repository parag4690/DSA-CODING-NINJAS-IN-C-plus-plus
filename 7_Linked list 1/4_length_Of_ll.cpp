int length(Node *head)
{
    
    if(head!=NULL){
       return 1+length(head->next);
    }
    
    //Write your code here
}