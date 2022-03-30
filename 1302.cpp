/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int i,j,k,curr_sz=1,nxt_sz=0,pre,nw;
        list<TreeNode*> q;
        q.push_back(root);
        nw=0;
        pre=root->val;
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop_front();
            curr_sz--;
            //nw=0;
            if(node->left!=0)
            {
                nxt_sz++;
                q.push_back(node->left);
                nw+=(node->left->val);
            }
            if(node->right!=0)
            {
                nxt_sz++;
                q.push_back(node->right);
                nw+=(node->right->val);
            }
            if(curr_sz==0)
            {
               // cout<<"curr: "<<curr_sz<<endl;
               // cout<<"nxt: "<<nxt_sz<<endl;
               // cout<<"pre: "<<pre<<endl;
               // cout<<"nw: "<<nw<<endl;
                if(nw==0)
                {
                    break;
                }
                pre=nw;
                nw=0;
                curr_sz=nxt_sz;
                nxt_sz=0;
            }
        }
        return pre; 
    }
};
