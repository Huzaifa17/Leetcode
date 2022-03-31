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
    int sumEvenGrandparent(TreeNode* root) {
        if(root==0)
        {
            return 0;
        }
        list<TreeNode*> q;
        q.push_back(root);
        int i,j,k,n,m,sum=0;
        while(!q.empty())
        {
            k=q.size();
            for(i=0;i<k;++i)
            {
                TreeNode* node=q.front();
                q.pop_front();
                if(node->left)
                {
                    q.push_back(node->left);
                }
                if(node->right)
                {
                    q.push_back(node->right);
                }
                if(node->val%2==0)
                {
                    if(node->left)
                    {
                        if(node->left->left)
                        {
                            sum+=(node->left->left->val);
                        }
                        if(node->left->right)
                        {
                            sum+=(node->left->right->val);
                        }
                    }
                    if(node->right)
                    {
                        if(node->right->left)
                        {
                            sum+=(node->right->left->val);
                        }
                        if(node->right->right)
                        {
                            sum+=(node->right->right->val);
                        }
                    }
                }
            }
        }
        return sum;
    }
};
