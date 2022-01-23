class Solution {
public:
    int arrangeCoins(int n) {
        int i,j,k,l=0,r=100000,mid;
        long long sum;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            sum=((long long)mid*(mid+1));
            sum/=2;
            if(sum>n)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return l-1;
    }
};
