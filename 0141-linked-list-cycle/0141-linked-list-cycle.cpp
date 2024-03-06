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
    bool hasCycle(ListNode *h) {
        ListNode * f=h;
        ListNode* s=h;
        while(f && f->next){
            f=f->next->next;
            s=s->next;
            if(f==s) return 1;
            
        }
        return 0;
    }
};