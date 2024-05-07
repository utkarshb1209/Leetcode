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
    ListNode* reverse(ListNode* h){
        ListNode* t1=NULL;
        ListNode* t2=h;
        ListNode* t3=h->next;
        while(t3){
            t2->next=t1;
            t1=t2;
            t2=t3;
            t3=t3->next;
        }
        t2->next=t1;
        return t2;
    }
    ListNode* doubleIt(ListNode* h) {
        ListNode* a1=new ListNode();
        ListNode* a2=a1;
        ListNode* r=reverse(h);
        int s=0,c=0;
        while(r || c){
            s=0;
            if(r){
            s+=r->val;
                s+=r->val;
            r=r->next;
            }
            s+=c;
            c=s/10;
            // cout<<s<<" "<<c<<" ";
            s=s%10;
            
            ListNode* t=new ListNode(s);
                a1->next=t;
            a1=a1->next;
        }
        a1=a2->next;
        // while(a1) {
        //     cout<<a1->val<<" ";
        //     a1=a1->next;
        // }
        a1=reverse(a2->next);
        // while(a1) {
        //     cout<<a1->val<<" ";
        //     a1=a1->next;
        // }
        return a1;
    }
};