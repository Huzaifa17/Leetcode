class Solution {
public:
    bool isValid(vector<int>& weights,int cap,int days)
    {
        int j,k,sum=0,i=0,d=1;
        while(i<weights.size())
        {
            k=weights[i];
            sum+=k;
            i++;
            if(sum>cap)
            {
             //   i--;
                d++;
                sum=k;
            }
        }
        return d<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end()),r=100000005,i,j,k,mid;
        while(l<=r)
        {
            mid=l+((r-l)/2);
            if(isValid(weights,mid,days))
            {
                k=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return k;
    }
};
