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
    int sumOfLeftLeaves(TreeNode* root) {
        list<TreeNode*> q;
        if(root->left==0&&root->right==0)
        {
            return 0;
        }
        int sum=0;
        q.push_back(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop_front();
            if(node->left!=0&&node->left->left==0&&node->left->right==0)
            {
                sum+=(node->left->val);
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
        return sum;
    }
};
