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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode *curr,*pre,*nxt;
        int i=1;
        vector<int> v;
        pre=head;
        curr=pre->next;
        nxt=curr->next;
        while(nxt!=0)
        {
            if(curr->val>pre->val&&curr->val>nxt->val)
            {
                v.push_back(i);
            }
            else if(curr->val<pre->val&&curr->val<nxt->val)
            {
                v.push_back(i);
            }
            i++;
            pre=curr;
            curr=nxt;
            nxt=nxt->next;
        }
        int l=v.size();
        vector<int> v2;
        if(l<2)
        {
            v2.push_back(-1);
            v2.push_back(-1);
            return v2;
        }
        int min=10000001;
        int max=v[l-1]-v[0];
        for(i=0;i<l-1;++i)
        {
            if((v[i+1]-v[i])<min)
            {
                min=v[i+1]-v[i];
            }
        }
        v2.push_back(min);
        v2.push_back(max);
        return v2;
    }
};
