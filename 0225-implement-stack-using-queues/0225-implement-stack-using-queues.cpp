class MyStack {
public:
    vector<int> stk;
    MyStack() {
    }
    
    void push(int x) {
        stk.push_back(x);
    }
    
    int pop() {
        if(!stk.empty()){
            int val=stk.back();
            stk.pop_back();
            return val;
        }
        return -1;
    }
    
    int top() {
        if (!stk.empty()) {
            return stk.back();
        }
        return -1;
    }
    
    bool empty() {
        return stk.empty();
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