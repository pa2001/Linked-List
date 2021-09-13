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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0;
        ListNode* ptr=head,*first,*second;
        while(ptr!=NULL)
        {
            ptr=ptr->next;
            n++;
        }
        n=n-k+1;
        ptr=head;
        while(ptr!=NULL)
        {
            if(k==1)
                first=ptr;
            if(n==1)
                second=ptr;
            k--;
            n--;
            ptr=ptr->next;
        }
        swap(first->val,second->val);
        return head;
    }
};
