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
    ListNode* reverseList(ListNode* h) {
        if(!h ||!(h->next)) return h;
        ListNode* a1=NULL;
        ListNode* a2=h;
        
        ListNode* a3=h->next;
        while(a3){
            a2->next=a1;
            // a3->next=a2;
            a1=a2;
            a2=a3;
            a3=a3->next;
        }
        a2->next=a1;
        return a2;
    }
};