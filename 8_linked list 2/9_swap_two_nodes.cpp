Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
	Node *p=head , *q=head;
	int x , y;
	for(int k=0; k<i; k++){
      p=p->next;
	}
	x=p->data;
	for(int k=0; k<j; k++){
		q=q->next;
	}
	y=q->data;
	q->data = x;
	p->data = y;

	return head;
}
