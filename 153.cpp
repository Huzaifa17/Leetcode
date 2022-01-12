class Solution {
public:
    int findMin(vector<int>& nums) {
        int i,j,k=0,n,l=0,r=nums.size()-1,mid,min;
        while(l<=r)
        {
            mid=l+((r-l)/2);
            if(nums[mid]>=nums[l])
            {
                if(k==0)
                {
                    min=nums[l];
                    k=1;
                }
                else
                {
                    if(nums[l]<min)
                    {
                        min=nums[l];
                    }
                }
                l=mid+1;
            }
            else
            {
                if(k==0)
                {
                    min=nums[mid+1];
                    k=1;
                }
                else
                {
                    if(nums[mid+1]<min)
                    {
                        min=nums[mid+1];
                    }
                }
                r=mid;
            }
        }
        return min;
    }
};
