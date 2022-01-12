class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i,j,k,l=0,r=arr.size()-1,mid,max,sig=0;
        j=r+1;
        while(l<=r)
        {
            mid=l+((r-l)/2);
            if(arr[mid]>arr[mid+1])
            {
                k=mid;
                r=mid-1;
            }
            else
            {
               // k=mid;
                l=mid+1;
            }
        }
        return k;
    }
};
