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
    int getMinimumDifference(TreeNode* root) {
        list<TreeNode*> q;
        map<int,int> mp;
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
        int min=100000001;
        map<int,int> :: iterator it,it2;
        it=mp.begin();
        it2=it;
        it++;
        for(;it!=mp.end();++it,++it2)
        {
            int v;
            v=fabs(it->first-it2->first);
            if(v<min)
            {
                min=v;
            }
        }
        return min;
    }
};
