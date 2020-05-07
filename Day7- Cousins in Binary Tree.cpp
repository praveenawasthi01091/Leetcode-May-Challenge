/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    pair<int,int> levelAndParent(TreeNode* root,int x,int h,int p)
    {
        if(!root)
            return make_pair(-1,-1);
        if(root->val==x)
            return make_pair(h,p);
        pair<int,int> l=levelAndParent(root->left, x, h+1,root->val);
        pair<int,int> r=levelAndParent(root->right,x, h+1,root->val);
         if(l.first==-1 || l.second==-1)
             return r;
        return l;
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(!root || x==y)
            return false;
        pair<int,int>p1=levelAndParent(root,x,0,-1);
        pair<int,int>p2=levelAndParent(root,y,0,-1);
        if(p1.first == p2.first && p1.second!=p2.second)
            return true;
        return false;
    }
};
