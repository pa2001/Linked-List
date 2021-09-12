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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp=head,prev=NULL,curr;
        if(head==NULL)
            return NULL;
        while(temp->next!=NULL)
        {
            if(temp->next->val==val)
            {
                ListNode* curr=temp->next;
                temp->next=temp->next->next;
                delete curr;
            }else
                temp=temp->next;
        }if(head->val==val)
        {
            ListNode* temp=head;
            head=head->next;
            delete temp;
        }return head;
    }
};
