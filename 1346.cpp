class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> st;
        set<int> :: iterator it;
        int i,j,k;
        int c=0;
        for(i=0;i<arr.size();++i)
        {
            st.insert(arr[i]);
            // here is the next
            if(arr[i]==0)
            {
                c++;
            }
        }
        for(it=st.begin();it!=st.end();++it)
        {
            if(st.find(2*(*it))!=st.end()&&st.find(2*(*it))!=it)
            {
                return true;
            }
        }
        if(c>1)
        {
            return true;
        }
        return false;
    }
};
