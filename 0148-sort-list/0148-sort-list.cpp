/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> res;
        ListNode* temp = head;
        while (temp != nullptr) {
            res.push_back(temp->val);
            temp = temp->next;
        }
        sort(res.begin(), res.end());
        if (res.empty()) {
            return nullptr;
        }
        ListNode* head2 = new ListNode(res[0]);
        ListNode* current = head2;

        for (int i = 1; i < res.size(); ++i) {
            current->next = new ListNode(res[i]);
            current = current->next;
        }

        return head2;
    }
};