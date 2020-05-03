class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size();
        int m=magazine.size();
        if(n>m)
            return false;
        int arr_ransom[26]={0};
        int arr_magazine[26]={0};
        for(int i=0;i<n;i++)
        {
            arr_ransom[ransomNote[i]-'a']++;
        }
        for(int i=0;i<m;i++)
        {
            arr_magazine[magazine[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr_ransom[i]>arr_magazine[i])
                return false;
        }
        return true;
        
    }
};
