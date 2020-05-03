class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int m=J.size();
        int n=S.size();
        int ans=0;
        int arr[58]={0};
        if(m==0)
        {
            return ans;
        }
        for(int i=0;i<m;i++)
        {
            arr[J[i]-'A']=1;
        }
        for(int i=0;i<S.size();i++)
        {
            if(arr[S[i]-'A']==1)
            {
                ans++;
            }
        }
        return ans;
        
    }
};
