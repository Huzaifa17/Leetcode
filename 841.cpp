class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int i,j,k,n,m;
        list<int> q;
        n=rooms.size();
        vector<int> visit(n,0);
        q.push_back(0);
        visit[0]=1;
        while(!q.empty())
        {
            int node=q.front();
            k=rooms[node].size();
            q.pop_front();
            for(i=0;i<k;++i)
            {
                int val;
                val=rooms[node][i];
                if(!visit[val])
                {
                    q.push_back(val);
                    visit[val]=1;
                }
            }
        }
        for(i=0;i<n;++i)
        {
            if(visit[i]==0)
            {
                return false;
            }
        }
        return true;
    }
};
