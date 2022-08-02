
Node *Reverse(Node *head ){
  Node *p=head , *q=NULL , *r = NULL;
  while(p!=NULL){
	  r=q;
	  q=p;
	  p=p->next;
	  q->next = r;
  }
  head = q;
  return head;
}

int count(Node *head){
	int c=0;
	while(head!=NULL){
		c++;
		head=head->next;
	}
	return c;
}

Node *kReverse(Node *head, int k)
{
	//Write your code here
	if( k==0 || head == NULL){
		return head;
	}
	int n = count(head)/k, data , flag=0;
	int s = count(head) - n;
	//
    Node *p = head , *head2=NULL , *last2 ,*q=head;
	for(int i=0; i<n; i++){
		Node *last=NULL  , *temp , *head1 ;
		data = p->data;
		head1=new Node(data);
		head1->data = data;
		head1->next = NULL;
		last = head1;
        p=p->next;
		for(int j=0;j<k-1; j++){
			data=p->data;
            temp = new Node(data);
			temp->data = data;
			temp->next=NULL;
			last->next = temp;
			last = temp;
			p=p->next;
		}

		head1 = Reverse(head1);
		if(flag==0){
			Node *r = head1;
		    data = head1->data;
			head2 = new Node(data);
		    head2->data = data;
			head2->next = NULL;
		    last2 = head2;
			r=r->next;
            while(r){
				data = r->data;
				Node *temp2 = new Node(data);
				temp2->data = data;
				temp2->next = NULL;
				last2->next = temp2;
				last2 = temp2;
				r=r->next;
			}
        }
		else{
			Node *r = head1;
			while(r){
				data = r->data;
				Node *temp2 = new Node(data);
				temp2->data = data;
				temp2->next = NULL;
				last2->next = temp2;
				last2 = temp2;

				r=r->next;
				
			}
		}
		flag=1;
		
		}
        for(int i=0; i<n*k-1; i++){
			q=q->next;
			head=head->next;
		}
	    head = head->next;
		q->next = NULL;
		head = Reverse(head);
        
		Node *r = head;
		while(r){
				data = r->data;
				Node *temp2 = new Node(data);
				temp2->data = data;
				temp2->next = NULL;
				last2->next = temp2;
				last2 = temp2;
				r=r->next;
			}
	return head2;
    
}