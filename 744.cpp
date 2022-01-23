class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i,min_indx=-1,j,l=0,mid,r=letters.size()-1;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(letters[mid]>target)
            {
                min_indx=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        if(min_indx==-1)
        {
            min_indx=0;
            //
        }
        return letters[min_indx];
    }
};
