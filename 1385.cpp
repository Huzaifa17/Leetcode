class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int i,j,k,l,r,mid;
        int lim1=arr1.size();
        int lim2=arr2.size();
        int sum=0;
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        for(i=0;i<lim1;++i)
        {
            l=0,r=lim2-1;
            k=0;
            while(l<=r)
            {
                mid=l+((r-l)/2);
               // int dis=arr1[i]-arr2[mid];
                if(fabs(arr1[i]-arr2[mid])<=d)
                {
                    k=1;
                    break;
                }
                else if(arr1[i]<arr2[mid])
                {
                    r=mid-1;
                }
                else
                {
                    //k=1;
                    //break;
                    l=mid+1;
                }
            }
            if(k==0)
            {
                sum++;
            }
        }
        return sum;
    }
};
