class Solution {
public:
    double ab(double n)
    {
        return n<0?(-1*n):n;
    }
    double isSqrt(double n)
    {
        double mid,l=0,r=n;
        while(l<=r)
        {
            mid=l+((r-l)/2);
            if(ab((mid*mid)-n)<=0.0000001)
            {
                return mid;
            }
            else if((mid*mid)>n)
            {
                r=mid;
            }
            else
            {
                l=mid;
            }
        }
        return 0;
    }
    bool isPerfectSquare(int num) {
        double n;
        n=isSqrt(num);
        int n2=n;
        double n3=n2;
        double n4=n2+1;
        if(ab(n3-n)<=0.0000001)
        {
            return true;
        }
        else if(ab(n4-n)<=0.0000001)
        {
            return true;
        }
        return false;
    }
};
