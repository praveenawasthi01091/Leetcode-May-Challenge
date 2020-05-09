class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num ==1 )
            return true;
        int l=1,r=num,m=0,x;
        while(l<r)
        {
            x=l+(r-l)/2;
            if(m==x)
                return false;
            m=x;
            if( num/m==m && num%m==0)
                return true;
            if(m>num/m)
                r=m;
            else
                l=m;    
        }
        return false;
    }
};
