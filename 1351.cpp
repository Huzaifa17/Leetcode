class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i,j,k,n,m,l,r,mid,sum=0;
        for(i=0;i<grid.size();++i)
        {
            l=0,r=grid[i].size()-1;
            int pos=r+1;
            while(l<=r)
            {
                mid=l+((r-l)/2);
                if(grid[i][mid]<0)
                {
                    pos=mid;
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            sum+=(grid[i].size()-pos);
        }
        return sum;
    }
};
