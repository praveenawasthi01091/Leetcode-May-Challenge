class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int n=trust.size();
        if(n==0)
            return N;
        set<int>s;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            s.insert(trust[i][0]);
            m[trust[i][1]]++;
        }

        for(int i=1;i<=N;i++)
        {
            if(s.find(i)==s.end())
            {
                auto it=m.find(i);
                if(it!=m.end())
                {
                    if(it->second == N-1)
                        return i;
                }
            }
        }
        return -1;    
    }
};

