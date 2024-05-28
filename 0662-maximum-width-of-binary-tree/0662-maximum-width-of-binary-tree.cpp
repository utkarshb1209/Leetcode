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
    int widthOfBinaryTree(TreeNode* r) {
        queue<pair<TreeNode*,int>> q;
        int ans=0;
        q.push({r,0});
        while(q.size()){
            int a1=q.front().second;
            int a2=q.back().second;
            ans=max(ans,a2-a1+1);
            int n=q.size();
            while(n--){
                auto o=q.front().first;
                long long  yy=q.front().second;
                q.pop();
                if(o->left) q.push({o->left,2*yy+1});
                if(o->right) q.push({o->right,2*yy+2});
            }
        }
        return ans;
    }
};