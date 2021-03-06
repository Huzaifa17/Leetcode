class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int i,j,k,n,m;
        map<int,int> mp;
        map<int,int> ::iterator it;
        vector<int> v;
        for(i=0;i<nums1.size();++i)
        {
            mp[nums1[i]]++;
        }
        for(i=0;i<nums2.size();++i)
        {
            if(mp[nums2[i]]>0)
            {
                v.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
        }
        return v;
    }
};
