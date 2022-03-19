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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> sln;
       // int level[10001]={0};
        //level[root->val]=0;
        list<TreeNode*> q;
        q.push_back(root);
        while(!q.empty())
        {
            TreeNode* node;
            int n=q.size(),cnt=0;
            double value=0;
            for(int i=0;i<n;++i)
            {
                node=q.front();
                if(node->right!=0)
                {
                    q.push_back(node->right);
                }
                if(node->left!=0)
                {
                    q.push_back(node->left);
                }
                value+=(node->val);
                q.pop_front();
            }
            sln.push_back((value)/n);
        }
        return sln;
    }
};
