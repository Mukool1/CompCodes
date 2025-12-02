struct Node{
    struct Node*next;
    int val;
};

class MyQueue {
private:
Node *head;
public:
    MyQueue() {
        head=nullptr;
    }
    
    void push(int x) {
            Node* newNode=new Node();
            newNode->val=x;
            newNode->next=head;
            head=newNode;
    }
    
    int pop() {
        if(head==nullptr){
            return -1;
        }
        if(head->next==nullptr){
            int val=head->val;
            delete head;
            head=nullptr;
            return val;
        }
        Node*temp=head;
        Node*prev=nullptr;
        while(temp->next!=nullptr){
            prev=temp;
            temp=temp->next;
        }
        int val=temp->val;
        delete temp;
        prev->next=nullptr;
        return val;
    }
    
    int peek() {
        if(head==nullptr){
            return -1;
        }
        if(head->next==nullptr){
            return head->val;
        }
        Node*temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        return temp->val;
    }
    
    bool empty() {
        if(head==nullptr){
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */