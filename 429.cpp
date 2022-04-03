/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        int i,j,k,n,m;
        vector<vector<int>> ans;
        if(root==0)
        {
            return ans;
        }
        list<Node*> q;
        q.push_back(root);
        vector<int> v2;
        v2.push_back(root->val);
        ans.push_back(v2);
        while(!q.empty())
        {
            int len=q.size();
            vector<int> v;
            for(i=0;i<len;++i)
            {
                Node* node=q.front();
                q.pop_front();
                k=node->children.size();
                for(j=0;j<k;++j)
                {
                    v.push_back(node->children[j]->val);
                    q.push_back(node->children[j]);
                }
            }
            if(v.size()!=0)
            ans.push_back(v);
        }
        return ans;
    }
};
