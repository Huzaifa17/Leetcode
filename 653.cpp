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
    bool findTarget(TreeNode* root, int k) {
        map<int,int> mp;
        int i,j,n,m;
        list<TreeNode*> q;
        q.push_back(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop_front();
            mp[node->val]++;
            if(node->left)
            {
                q.push_back(node->left);
            }
            if(node->right)
            {
                q.push_back(node->right);
            }
        }
        for(auto& it:mp)
        {
            if(mp.find(k-it.first)!=mp.end())
            {
                int num=it.first;
                if(num==(k-it.first)&&mp[num]>1)
                {
                    return true;
                }
                else if(num!=(k-it.first))
                {
                    return true;
                }
                //return true;
            }
        }
        return false;
    }
};
