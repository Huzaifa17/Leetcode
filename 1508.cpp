class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> v;
        int i,j,k,m,t;
        for(i=0;i<n;++i)
        {
            long long sum=0;
            for(j=i;j<n;++j)
            {
                sum+=nums[j];
                v.push_back(sum);
            }
        }
        sort(v.begin(),v.end());
        long long sum=0;
        for(i=left-1;i<right;++i)
        {
            sum+=v[i];
            sum=(sum%1000000007);
        }
        int ans=sum;
        return ans;
    }
};
