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
    int findGcd(int val1,int val2){
        while (val2) {
            int temp = val2;
            val2 = val1 % val2;
            val1 = temp;
        }
        return val1;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*temp=head;
        while(temp->next){
            int gcd=findGcd(temp->val,temp->next->val);
            ListNode*newNode=new ListNode(gcd);
            newNode->next=temp->next;
            temp->next=newNode;
            temp=temp->next->next;
        }
        return head;
    }
};