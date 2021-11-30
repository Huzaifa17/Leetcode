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
        ListNode *curr=head,*curr1,*curr2;
        int i,j,n,m,size=0;
        i=1;
        while(i<k)
        {
            curr=curr->next;
            i++;
            //size++;
        }
        curr1=curr;
        curr=head;
        while(curr!=0)
        {
            size++;
            curr=curr->next;
        }
        n=size+1-k;
        curr2=head;
        i=1;
        while(i<n)
        {
            curr2=curr2->next;
            i++;
        }
        n=curr1->val;
        curr1->val=curr2->val;
        curr2->val=n;
        return head;
    }
};
