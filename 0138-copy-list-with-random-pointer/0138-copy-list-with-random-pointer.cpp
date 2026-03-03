/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head)
            return nullptr;
        unordered_map<Node*, Node*> m;
        Node* current = head;
        while (current) {
            m[current] = new Node(current->val);
            current = current->next;
        }
        current=head;
        while(current){
            m[current]->next=m[current->next];
            m[current]->random=m[current->random];
            current=current->next;
        }
        return m[head];
    }
};