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
    int ch(TreeNode* r,int &ans){
        if(!r) return 0;
        int x=ch(r->left,ans);
        int y=ch(r->right,ans);
        ans=max(ans,x+y);
        return 1+max(x,y);
    }
    int diameterOfBinaryTree(TreeNode* r) {
        int ans=0;
        ch(r,ans);
        return ans;
    }
};