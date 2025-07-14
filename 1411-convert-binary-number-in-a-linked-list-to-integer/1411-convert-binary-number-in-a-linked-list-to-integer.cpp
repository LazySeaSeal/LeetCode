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
        string s="";  // or simple reverse and obtain lsb
    ListNode* t=head;
            while(t)
                {
                    s=to_string(t->val)+s;
                    t=t->next;
                }
        int sum=0,p=1;
        for(char c:s)
            {
               sum+=(c-'0')*p;
               p=p*2; 
            }
        return sum;

        
        
    }
};