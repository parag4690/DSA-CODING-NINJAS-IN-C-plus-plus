
class Stack {
	// Define the data members
   public:
    Node *head ;
    Stack() {
        // Implement the Constructor 
        
        int data = 0;
        head = new Node(data);
        head->next = NULL;
        
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        Node *p=head;
        int count=0;
        while(p!=NULL){
            count++;
            p=p->next;
        }
        return count-1;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        if(head->next==NULL){
            return true;
        }
        return false;
        
    }

    void push(int element) {
        // Implement the push() function
         int data = element;
        Node *t = new Node(data);
        if(t == NULL){
            return ;
        }
       
        t->data = element;
        t->next = head;
        head = t;
        
    }

    int pop() {
        // Implement the pop() function
        int x = -1;
        if(head->next ==NULL){
            return -1;
        }
        else{
            Node *p = head;
            head=head->next;
            x=p->data;
            free(p);
        }
        return x;
        
    }

    int top() {
        // Implement the top() function
        
        int x = -1;
        if(head->next == NULL){
            return x;
        }
        else{
            return head->data;
        }
        
    }
};
class Stack {
	// Define the data members
   public:
    Node *head ;
    Stack() {
        // Implement the Constructor 
        
        int data = 0;
        head = new Node(data);
        head->next = NULL;
        
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        Node *p=head;
        int count=0;
        while(p!=NULL){
            count++;
            p=p->next;
        }
        return count-1;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        if(head->next==NULL){
            return true;
        }
        return false;
        
    }

    void push(int element) {
        // Implement the push() function
         int data = element;
        Node *t = new Node(data);
        if(t == NULL){
            return ;
        }
       
        t->data = element;
        t->next = head;
        head = t;
        
    }

    int pop() {
        // Implement the pop() function
        int x = -1;
        if(head->next ==NULL){
            return -1;
        }
        else{
            Node *p = head;
            head=head->next;
            x=p->data;
            free(p);
        }
        return x;
        
    }

    int top() {
        // Implement the top() function
        
        int x = -1;
        if(head->next == NULL){
            return x;
        }
        else{
            return head->data;
        }
        
    }
};
