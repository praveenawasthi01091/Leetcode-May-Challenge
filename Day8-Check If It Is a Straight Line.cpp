class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n=coordinates.size();
        if(n==1 || n==0)
            return false;
        if(n==2)
            return true;
        int y=coordinates[1][1]-coordinates[0][1];
        int x=coordinates[1][0]-coordinates[0][0];
        
        for(int i=2;i<n;i++)
        {
            int diffY=coordinates[i][1]-coordinates[i-1][1];
            int diffX=coordinates[i][0]-coordinates[i-1][0];
            if(y*diffX != x*diffY)
                return false;
        }
        return true;
    }
};
