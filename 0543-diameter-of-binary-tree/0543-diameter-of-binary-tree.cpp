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
    int mx=0,ans=0;
    int ch(TreeNode* &r){
        if(!r) return 0;
        int x=ch(r->left);
        int y=ch(r->right);
        ans=x+y;
        mx=max(mx,ans);
        return 1+max(x,y);
    }
    int diameterOfBinaryTree(TreeNode* r) {
        ch(r);
        return mx;
    }
};