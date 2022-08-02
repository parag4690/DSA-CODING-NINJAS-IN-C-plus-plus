
void printIthNode(Node *head, int i)
{
    //Write your code here
    static int j=0;
    if(head!=NULL ){
        if(i==j){
            cout<<head->data<<endl;
        }
        j++;
        printIthNode(head->next , i);
    }
}