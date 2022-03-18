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
    int maxDepth(Node* root) {
        int i,j,k,m,last,num=0;
        list<Node*> q;
        list<int> nm;
        int level[10001]={0};
        if(root==0)
        {
            return 0;
        }
        q.push_back(root);
        level[num]=0;
        nm.push_back(0);
        int dis=1;
        while(!q.empty())
        {
            Node *n=q.front();
            q.pop_front();
            int v=nm.front();
            nm.pop_front();
            last=v;
            for(auto& it:n->children)
            {
                //num++;
                //level[num]=level[v]+1;
                if(it!=0)
                {
                    q.push_back(it);
                    num++;
                    level[num]=level[v]+1;
                    nm.push_back(num);
                }
            }
        }
        return level[last]+1;
    }
};
