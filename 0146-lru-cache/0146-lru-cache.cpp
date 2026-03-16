class LRUCache {
public:
    class Node {
    public:
        int key, val;
        Node* next;
        Node* prev;
        Node(int k, int v) : key(k), val(v), next(nullptr), prev(nullptr) {}
    };

    Node* head = new Node(-1, -1);
    Node* tail = new Node(-1, -1);
    unordered_map<int, Node*> m;
    int limit;

    LRUCache(int capacity) {
        limit = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void insertNode(Node* newNode) {
        Node* temp = head->next;
        head->next = newNode;
        temp->prev = newNode;
        newNode->next = temp;
        newNode->prev = head;
    }

    void deleteNode(Node* oldNode) {
        Node* oldPrev = oldNode->prev;
        Node* oldNext = oldNode->next;
        oldPrev->next = oldNext;
        oldNext->prev = oldPrev;
    }

    int get(int key) {
        if (m.find(key) == m.end()) return -1;
        Node* ansNode = m[key];
        deleteNode(ansNode);
        insertNode(ansNode);
        return ansNode->val;
    }

    void put(int key, int value) {
        if (m.find(key) != m.end()) {
            Node* existing = m[key];
            deleteNode(existing);
            m.erase(key);
            delete existing;
        }
        if (m.size() == limit) {
            Node* lru = tail->prev;
            m.erase(lru->key);
            deleteNode(lru);
            delete lru;
        }
        Node* newNode = new Node(key, value);
        insertNode(newNode);
        m[key] = newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */