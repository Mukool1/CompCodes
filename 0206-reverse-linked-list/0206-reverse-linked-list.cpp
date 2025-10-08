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
    ListNode* reverseList(ListNode* head) {
        vector<int>lis;
        ListNode* temp = head;
        while (temp != nullptr) {
            lis.push_back(temp->val);
            temp = temp->next;
        }
         if (lis.empty()) {
            return nullptr;
        }
        reverse(lis.begin(), lis.end());
        
        ListNode* head2 = new ListNode(lis[0]);
        ListNode* curr = head2;

        for (size_t i = 1; i < lis.size(); ++i) {
            curr->next = new ListNode(lis[i]);
            curr = curr->next;
        }
        return head2;
    }
};