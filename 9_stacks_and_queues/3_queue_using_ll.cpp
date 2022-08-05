
class Queue {
	// Define the data members
   public:
   Node *first;
   Node *rear;
   int size;
    Queue() {
		// Implement the Constructor
       first = NULL;
       rear = NULL;
       
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		// Implement the getSize() function
        Node *p = first;
        int count=0;
        while(p!=NULL){
            count++;
            p=p->next;
        }
        return count;
	}

    bool isEmpty() {
		// Implement the isEmpty() function
        if(first == NULL ){
            return true;
        }
        return false;
	}

    void enqueue(int data) {
		// Implement the enqueue() function
        Node *t = new Node(data);
        if(t==NULL){
           return ;
        }
        else{
            t->data = data;
            t->next= NULL;
        }
        if(first == NULL){
            first = rear = t;
        }
        else{
            rear->next = t;
            rear = t;
        }
	}

    int dequeue() {
        // Implement the dequeue() function
        int x = -1;
        if(first == NULL){
            return x;
        }
        else{
           Node *p=first;
           first=first->next;
           x = p->data;
           delete p;
           
        }
        return x;
    }

    int front() {
        // Implement the front() function
        if(first==NULL){ //
            return -1;
        }
        return first->data;
    }
};
