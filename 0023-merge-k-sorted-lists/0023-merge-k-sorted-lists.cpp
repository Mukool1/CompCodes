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
    ListNode* mergeLists(ListNode*lis1,ListNode*lis2){
        ListNode*temp1=lis1;
        ListNode*temp2=lis2;
        
        ListNode*lis3=new ListNode(0);
        ListNode*curr=lis3;

        while(temp1!=nullptr && temp2!=nullptr){
            if(temp1->val>temp2->val){
                curr->next=temp2;
                curr=curr->next;
                temp2=temp2->next;
            }
            else{
                curr->next=temp1;
                curr=curr->next;
                temp1=temp1->next;
            }
        }
        if(temp2!=nullptr)curr->next=temp2;
        if(temp1!=nullptr)curr->next=temp1;
        return lis3->next;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return nullptr;
        if(lists.size() == 1) return lists[0];
        
        for(int i = 1; i < lists.size(); i++){
            lists[0] = mergeLists(lists[0], lists[i]);
        }

        return lists[0];
    }
};