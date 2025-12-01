struct Node{
    struct Node*next;
    int data;
};

class MyStack {
private:
    Node*head;
public:
    MyStack() {
        head=nullptr;
    }
    
    void push(int x) {
            struct Node*newNode=new Node();
            newNode->data=x;
            newNode->next=head;
            head=newNode;
    }
    
    int pop() {
        if(head==nullptr){
            return -1;
        }
        int val=head->data;
        Node*temp=head;
        head=head->next;
        delete temp;
        return val;
    }
    
    int top() {
        if(head!=nullptr){
            return head->data;
        }
        return -1;
    }
    
    bool empty() {
        if(head==nullptr){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */