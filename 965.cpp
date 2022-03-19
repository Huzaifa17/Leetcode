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
    bool isUnivalTree(TreeNode* root) {
        int i,j,k,val;
        val=root->val;
        list<TreeNode*> q;
        q.push_back(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop_front();
            if(node->right!=0)
            {
                if(node->right->val==val)
                {
                    q.push_back(node->right);
                }
                else
                {
                    return false;
                }
            }
            if(node->left!=0)
            {
                if(node->left->val==val)
                {
                    q.push_back(node->left);
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};
