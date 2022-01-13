class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int i,j,k,n=nums1.size(),m=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(i=0;i<=1000;++i)
        {
            k=0;
            int l=0,r=n-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(nums1[mid]==i)
                {
                    k=1;
                    break;
                }
                else if(nums1[mid]>i)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            if(k==1)
            {
                l=0,r=m-1;
                while(l<=r)
                {
                    int mid=(l+r)/2;
                    if(nums2[mid]==i)
                    {
                        v.push_back(i);
                        break;
                    }
                    else if(nums2[mid]>i)
                    {
                        r=mid-1;
                    }
                    else
                    {
                        l=mid+1;
                    }
                }
            }
        }
        return v;
    }
};
