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
    int getDecimalValue(ListNode* head) {
        int count=0,sum=0;
        ListNode* ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
            count++;
        }
        ptr=head;
        while(ptr!=NULL)
        {
            sum+=ptr->val*pow(2,count);
            count--;
            ptr=ptr->next;
        }return sum;
    }
};
