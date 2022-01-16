class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i,j,n=-1,m,l,r,mid,lim;
        lim=arr.size();
        l=0,r=lim-1;
        while(l<=r)
        {
            mid=l+((r-l)/2);
            if(arr[mid]-(mid+1)<k)
            {
                n=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(n==-1)
        {
            return k;
        }
        m=arr[n]-(n+1);
        return arr[n]+(k-m);
    }
};
