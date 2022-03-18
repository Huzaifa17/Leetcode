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
    TreeNode* invertTree(TreeNode* root) {
        int i,j,k,n,m;
        TreeNode *right1,*left1,*temp;
        list<TreeNode*> q;
        if(root!=0)
        {
            q.push_back(root);
        }
       // q.push_back(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop_front();
            right1=node->right;
            left1=node->left;
            if(right1!=0)
            {
                q.push_back(right1);
            }
            if(left1!=0)
            {
                q.push_back(left1);
            }
            node->right=left1;
            node->left=right1;
        }
        return root;
    }
};
