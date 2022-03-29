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
    bool isCousins(TreeNode* root, int x, int y) {
        list<TreeNode*> q;
        q.push_back(root);
        int parent[105];
        int level[105]={0};
        int i,j,k;
        for(i=1;i<=100;++i)
        {
            parent[i]=i;
        }
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop_front();
            if(node->left!=0)
            {
                parent[node->left->val]=node->val;
                level[node->left->val]=level[node->val]+1;
                q.push_back(node->left);
            }
            if(node->right!=0)
            {
                parent[node->right->val]=node->val;
                level[node->right->val]=level[node->val]+1;
                q.push_back(node->right);
            }
        }
       // cout<<"lev x: "<<level[x]<<" par x: "<<parent[x]<<endl;
       // cout<<"lev y: "<<level[y]<<" par y: "<<parent[y]<<endl;
        if(level[x]==level[y]&&parent[x]!=parent[y])
        {
            return true;
        }
        return false;
    }
};
