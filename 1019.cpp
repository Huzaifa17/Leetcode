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
        int i,j,k,value,c;
        ListNode *curr=head,*cn;
        vector<int> v;
        while(curr!=0)
        {
            cn=curr->next;
            c=0;
            value=curr->val;
            while(cn!=0)
            {
                if(cn->val>value)
                {
                    c=1;
                    break;
                }
                cn=cn->next;
            }
            if(c==1)
            {
                v.push_back(cn->val);
            }
            else
            {
                v.push_back(0);
            }
            curr=curr->next;
        }
        return v;
    }
};
