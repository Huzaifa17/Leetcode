class Solution {
public:
    int bs(int sumAlice,int sumBob,int val,vector<int>& bobSizes)
    {
        int l=0,j,k,n,m,mid,r=bobSizes.size()-1;
        while(l<=r)
        {
            mid=l+((r-l)/2);
            if(sumAlice+bobSizes[mid]-val==sumBob+val-bobSizes[mid])
            {
                return mid;
            }
            else if(sumAlice+bobSizes[mid]-val>sumBob+val-bobSizes[mid])
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return -1;
    }
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int i,j,k,n,m;
        int lim1=aliceSizes.size(),lim2=bobSizes.size();
        sort(aliceSizes.begin(),aliceSizes.end());
        sort(bobSizes.begin(),bobSizes.end());
        int sumAlice=0,sumBob=0;
        for(i=0;i<lim1;++i)
        {
            sumAlice+=aliceSizes[i];
        }
        for(i=0;i<lim2;++i)
        {
            sumBob+=bobSizes[i];
        }
        vector<int> v;
        for(i=0;i<lim1;++i)
        {
            k=bs(sumAlice,sumBob,aliceSizes[i],bobSizes);
            if(k!=-1)
            {
                v.push_back(aliceSizes[i]);
                v.push_back(bobSizes[k]);
                break;
            }
        }
        return v;
    }
};
