class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m1;
        for(int i=0;i<n;i++)
        {
            m1[nums[i]]++;
        }
        for(auto it=m1.begin();it!=m1.end();it++)
        {
            if(it->second >n/2)
                return it->first;
        }  
        return -1;
    }
};
