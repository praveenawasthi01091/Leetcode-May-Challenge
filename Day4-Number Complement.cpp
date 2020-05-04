class Solution {
public:
    int findComplement(int num) { 
    int i=0,ans=0,mul=1,val;
    while (num > 0)
    { 
        val = num & 1; 
        num=num>>1; 
        ans+=(val^1)*mul;
        if(mul<= INT_MAX/2)
            mul*=2;
        i++; 
    }
        return ans;    
    }
};
