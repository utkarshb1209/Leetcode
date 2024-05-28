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
        q.push({r,0});
        int ans=0;
        while(q.size()){
            int n=q.size();
            int a1=q.front().second;
            int a2=q.back().second;
            ans=max(ans,a2-a1+1);
            
            while(n--){
                auto w=q.front().first;
                long long h=q.front().second;
                q.pop();
                if(w->left) q.push({w->left,2*h+1});
                if(w->right) q.push({w->right,2*h+2});
            }
        }
        return ans;
    }
};