class Solution {
public:
    double ab(double x)
    {
        return x<0?(-1*x): x;
    }
    int mySqrt(int x) {
        double l=0,r=x,mid;
        int i,j,n;
        while(l<=r)
        {
            mid=l+((r-l)/2);
            if(ab((mid*mid)-x)<=0.000001)
            {
                break;
            }
            else if((mid*mid)>x)
            {
                r=mid;
            }
            else
            {
                l=mid;
            }
        }
        n=mid;
        n++;
        if(ab(n-mid)<=0.000001)
        {
            return n;
        }
        n=mid;
        return n;
    }
};
