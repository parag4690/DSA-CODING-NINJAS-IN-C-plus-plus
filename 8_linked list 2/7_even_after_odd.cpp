
Node *evenAfterOdd(Node *head)
{
	//write your code here
    Node *head1 , *last , *p=head,*q=head , *temp;
    int data ;
    
    if(head==NULL || head->next == NULL){
        return head;
    }
   
    while(p->data%2==0 && p->next!=NULL){ // agla check esliye kiya quki zero ko bhi ye infinte chladeta
        p=p->next;
    }
	if(p->data%2==0){
		return head;
	}
    if(p->data%2!=0){
        data = p->data;
        head1 = new Node(data);
        head1->data = data;
		head1->next = NULL;
        last = head1;
        p=p->next;
    }
    
	
    while(p){
        if(p->data%2!=0){
			// cout<<p->data<< " g"<<endl;
            data = p->data;
            temp=new Node(data);
            temp->data = data;
			temp->next = NULL;
            last->next = temp;
            last = temp;
		    // cout<<temp->data<<endl;
        }
        p=p->next;
		
    }
	//

    while(q!=NULL){
		
        if(q->data%2==0){
		    data = q->data;
            temp=new Node(data);
            temp->data = data;
			temp->next = NULL;
            last->next = temp;
            last = temp;
        }
	
	    q=q->next;

    
     }

    return head1;
}