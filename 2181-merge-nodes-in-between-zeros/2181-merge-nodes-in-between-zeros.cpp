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
    ListNode* mergeNodes(ListNode* head) {
        if (!head)
            return head;
        int sum = 0;
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        ListNode* temp = head->next;
        while (temp) {
            if (temp->val != 0) {
                sum += temp->val;
            } else {
                curr->next = new ListNode(sum);
                curr = curr->next;
                sum = 0;
            }
            temp = temp->next;
        }
        return dummy->next;
    }
};