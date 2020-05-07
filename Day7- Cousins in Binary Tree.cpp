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
    int height(TreeNode* root,int x,int h)
    {
        if(!root)
            return -1;
        if(root->val==x)
            return h;
        int l= height(root->left, x, h+1);
        int r=height(root->right,x, h+1);
         if(l==-1)
             return r;
        return l;
    }
public:
    int parent(TreeNode* root, int x,int p)
    {
        if(!root)
            return -1;
        if(root->val==x)
            return p;

        int l=parent(root->left,x,root->val);
        int r=parent(root->right,x,root->val);
        if(l==-1)
            return r;
        return l;
    }
public:
    bool isCousins(TreeNode* root, int x, int y) {
        if(!root)
            return false;
        if(x==y)
            return false;
        int h1=height(root,x,0);
        int h2=height(root,y,0);
        cout<<h1<<" "<<h2<<endl;
        if(h1!=h2)
            return false;
        int p1=parent(root,x,-1);
        int p2=parent(root,y,-1);
        cout<<p1<<" "<<p2<<endl;
        if(p1==p2)
            return false;
        return true;
    }
};
