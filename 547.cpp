class Solution {
public:
    int parent[201];
    int size[201];
    
    void init(int n)
    {
        for(int i=0;i<=n;++i)
        {
            parent[i]=i;
            size[i]=1;
        }
    }
    
    int find(int u)
    {
        if(u==parent[u])
        {
            return u;
        }
        return parent[u]=find(parent[u]);
    }
    
    void Union(int u,int v)
    {
        int p=find(u);
        int q=find(v);
        if(p!=q)
        {
            if(size[p]<size[q])
            {
                swap(p,q);
            }
            parent[q]=p;
            size[p]+=size[q];
        }
        return ;
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int i,j,k,n,m,sum=0;
        n=isConnected.size();
        init(n);
        for(i=0;i<n;++i)
        {
            for(j=i+1;j<n;++j)
            {
                if(isConnected[i][j]==1)
                {
                    Union(i+1,j+1);
                }
            }
        }
        for(i=1;i<=n;++i)
        {
            if(parent[i]==i)
            {
                sum++;
            }
        }
        return sum;
    }
};
