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
 void f(ListNode* l,ListNode* res)
 {
    if (!l)
        return;
    while(l)
    {
        res->next=new ListNode(l->val);
        l=l->next;
        res=res->next;
    }
 }


ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* res=new ListNode();
    ListNode* toReturn=res;
    while(l1 && l2)
    {
        res->next=new ListNode();
        res=res->next;
        if (l1->val >= l2->val)
        {
            res->val=l2->val;
            l2=l2->next;
        }
        else
        {
            res->val=l1->val;
            l1=l1->next;
        }
    }
    f(l1,res);
    f(l2,res);
    return toReturn->next;
       
}


};