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
    int minDepth(TreeNode* root) {
        if(root==0)
        {
            return 0;
        }
        int res=1,curr_size=1,nxt_size=0;
        list<TreeNode*> q;
        q.push_back(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop_front();
            curr_size--;
            if(node->left==0&&node->right==0)
            {
                return res;
            }
            if(node->left!=0)
            {
                q.push_back(node->left);
                nxt_size++;
            }
            if(node->right!=0)
            {
                q.push_back(node->right);
                nxt_size++;
            }
            if(curr_size==0)
            {
                curr_size=nxt_size;
                res++;
                nxt_size=0;
            }
        }
        return res;
    }
};
