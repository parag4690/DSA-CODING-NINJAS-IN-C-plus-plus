
Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
	Node *head1=NULL , *p=head , *last , *temp;
	if(M==0){
		return head1;
	}
	if(N==0 || head==NULL){
		return head;
	}
    
	int data = p->data , i , flag = 0;
	head1 = new Node(data);
	head1->data = data;
	head1->next = NULL;
    last = head1;
	p=p->next;
    
	//
while(p != NULL){
	// cout<<"yes"<<endl;
	if(flag){
		i=0;
	}
	else{
		i=1;
	}
	for(; i<M && p!=NULL; i++){
		data = p->data;
        temp = new Node(data);
		temp->data = data;
		temp->next = NULL;
		last->next = temp;
		last = temp;
		p=p->next;
	}
	flag=1;

	for(int i=0; i<N && p!=NULL; i++){
		p=p->next;
	}

}
    return head1;

}
