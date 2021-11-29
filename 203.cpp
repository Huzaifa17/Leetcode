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
        ListNode *curr=head,*pre=0;
        int n=1;
        while(curr!=0)
        {
            if(curr->val==val)
            {
                if(n==1)
                {
                    head=curr->next;
                }
                else
                {
                    pre->next=curr->next;
                }
            }
            else
            {
                pre=curr;
                n=0;
            }
            //pre=curr;
            curr=curr->next;
           // n++;
        }
        return head;
    }
};
