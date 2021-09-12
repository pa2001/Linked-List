/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*,bool>vis;
        while(head!=NULL)
        {
            if(vis[head])
                return true;
            vis[head]=true;
            head=head->next;
        }return false;
    }
};
