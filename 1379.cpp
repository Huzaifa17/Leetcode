/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        list<TreeNode*> q;
        q.push_back(cloned);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop_front();
            cout<<"node: "<<node->val<<endl;
            if(node->val==target->val)
            {
                return node;
            }
            if(node->left!=0)
            {
                q.push_back(node->left);
            }
            if(node->right!=0)
            {
                q.push_back(node->right);
            }
        }
        return 0;
    }
};
