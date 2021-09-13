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
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int> s1,s2;
        while(head!=NULL)
        {
            s1.push(head->val);
            head=head->next;
        }
        vector<int>v;
        while(!s1.empty())
        {
            while(!s2.empty()&&s1.top()>=s2.top())
                s2.pop();
            if(s2.size()==0)
                v.push_back(0);
            else
                v.push_back(s2.top());
            s2.push(s1.top());
            s1.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
