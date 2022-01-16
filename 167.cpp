class Solution {
public:
    int bs(vector<int>&numbers,int val,int l,int r,int key)
    {
        int i,j,k,n,mid;
        while(l<=r)
        {
            mid=l+((r-l)/2);
            if(numbers[mid]+val==key)
            {
                return mid+1;
            }
            else if(numbers[mid]+val>key)
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
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i,j,k,n,m;
        vector<int> v;
        for(i=0;i<numbers.size();++i)
        {
            k=bs(numbers,numbers[i],i+1,numbers.size()-1,target);
            if(k!=-1)    
            {
                v.push_back(i+1);
                v.push_back(k);
                break;
            }
        }
        return v;
    }
};
