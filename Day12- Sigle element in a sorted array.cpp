class Solution {

public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
            return -1;
        if(n==1)
            return nums[0];

        int l=0,h=n-1,mid,ans=-1;
        while(l<=h)
        {
            if(l==h)
            {
                ans=nums[l];
                break;
            }
            mid=l+(h-l)/2;
            if(mid%2==0)
            {
                if(nums[mid]==nums[mid+1])
                    l=mid+2;
                else
                    h=mid;
            }
            else
            {
                if(nums[mid]==nums[mid-1])
                    l=mid+1;
                else
                    h=mid-1;
            }
           
        }

        return ans;
    }
};
