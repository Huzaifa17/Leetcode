class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int i,j,k=-1,mid,l=0,r=nums.size()-1;
        while(l<=r)
        {
            mid=l+((r-l)/2);
            if(nums[mid]>=target)
            {
                if(nums[mid]==target)
                {
                    k=mid;
                }
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        if(k==-1)
        {
            return v;
        }
        for(i=k;i<nums.size();++i)
        {
            if(nums[i]==target)
            {
                v.push_back(i);
            }
            else
            {
                break;
            }
        }
        return v;
    }
};
