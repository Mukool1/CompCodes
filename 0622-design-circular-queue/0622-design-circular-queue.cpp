class MyCircularQueue {
    int *arr;
    int currSize,cap;
    int f=0,r=-1;
public:

    MyCircularQueue(int k) {
        this->cap=k;
        arr=new int[cap];
        f=0;
        r=-1;
        currSize = 0;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        r=(r+1)%cap;
        arr[r]=value;
        currSize++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        f=(f+1)%cap;
        currSize--;
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1; 
        }
        return arr[f];
    }
    
    int Rear() {
        if(isEmpty())return -1;
        return arr[r];
    }
    
    bool isEmpty() {
        if(currSize==0) return true;
        return false;
    }
    
    bool isFull() {
        if(currSize==cap)return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */